#include<iostream>
#include<string>
#include<map>

using namespace std;

class User
{
public:
	User();
	User(string name);
	~User();

	static User *getUser();
	static User *getUser(string name);

	string getName();
	void login();
	void logout();
	bool isOnline();
	int getLoginTimes();
	int getPlayedMatches();
	int getWonMatches();
	double getWinRatio();
	string getRank();
	void playWith(User *anotherUser, bool win);

private:
	void init();
	void refresh(bool win);
	static map<string, User*> index;

	string name;
	unsigned int loginTimes;
	unsigned int playedMatches;
	unsigned int wonMatches;
	float wonRatio;
	string rank;
	bool online;
};

map<string, User*> User::index;
User::User()
{
	init();
	name = "guest";
}

User::User(string name)
{
	init();
	index[name] = this;
	this->name = name;
}

User::~User()
{//if "delete user;" erase the user from the index
	index.erase(name);
}

User *User::getUser()
{
	return new User;
}

User *User::getUser(string name)
{//to get a new user,if exists,return the exists one
	if (name != "guest"&&index[name] != nullptr)
		return index[name];
	return new User(name);
}

string User::getName()
{
	return name;
}

void User::login()
{
	if (!online)
		++loginTimes;
	online = true;
}

void User::logout()
{
	online = false;
}

bool User::isOnline()
{
	return online;
}

int User::getLoginTimes()
{
	return loginTimes;
}

int User::getPlayedMatches()
{
	return playedMatches;
}

int User::getWonMatches()
{
	return wonMatches;
}

double User::getWinRatio()
{
	return wonRatio;
}

string User::getRank()
{
	return rank;
}

void User::playWith(User *anotherUser, bool win)
{//paly play,heiheihei~
	if (anotherUser != nullptr&&online&&anotherUser != nullptr&&anotherUser->online)
	{
		refresh(win);
		anotherUser->refresh(!win);
	}
}

void User::refresh(bool win)
{//to refresh the data of user after playing a match
	++playedMatches;
	wonMatches += win;
	wonRatio = wonMatches / playedMatches;
	if (wonRatio >= 0.8&&playedMatches >= 100)
		rank = "expert";
	else if (wonRatio >= 0.7&&playedMatches >= 50)
		rank = "professional";
	else rank = "beginner";
}

void User::init()
{//to init the new user's data
	loginTimes = 0;
	playedMatches = 0;
	wonMatches = 0;
	wonRatio = 0;
	rank = "beginner";
	online = false;
}

int main()
{
	User *guest0 = User::getUser();
	User *guest1 = User::getUser();
	guest0->login();
	cout << guest0->isOnline(); // true
	guest0->logout();
	cout << guest0->isOnline(); // false
	cout << guest1->getLoginTimes(); // 0
	User *maoge = User::getUser("Maoge");
	cout << maoge->getName(); // Maoge
	maoge->login();
	maoge->logout();
	maoge->login();
	maoge->login();
	cout << maoge->getLoginTimes(); // 2
	User *maogeCopy = User::getUser("Maoge");
	User *kuanye = User::getUser("Kuanye");
	kuanye->playWith(maoge, true);
	cout << kuanye->getWonMatches(); // 0
	kuanye->login();
	kuanye->playWith(maoge, true);
	cout << kuanye->getWonMatches(); // 1
	cout << maogeCopy->getPlayedMatches(); // 1

	return 0;
}