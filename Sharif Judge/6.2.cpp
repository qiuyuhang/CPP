#include<iostream>
#define _TRAVERSAL_ROW for (int i = 0; i < 4; ++i)
#define _TRAVERSAL_COLUMN for (int j = 0; j < 4; ++j)
#define _TRAVERSAL	_TRAVERSAL_ROW _TRAVERSAL_COLUMN

using namespace std;

class Matrix
{
public:
	Matrix();
	Matrix(float arr[]);
	~Matrix() {};//no need of destroy

	void add(const Matrix&);
	void multiply(const Matrix&);
	void print();

	Matrix& operator+=(const Matrix&);
	float& operator()(int row, int column);
	float operator()(int row, int column) const;

private:
	float mat[4][4];
};


Matrix::Matrix()
{
	_TRAVERSAL cin >> mat[i][j];
}

Matrix::Matrix(float arr[])
{
	int n = 0;
	_TRAVERSAL mat[i][j] = arr[n++];
}

void Matrix::add(const Matrix &matrix)
{
	_TRAVERSAL mat[i][j] = matrix.mat[i][j];
}

void Matrix::multiply(const Matrix &matrix)
{
	int result[4][4] = { 0 };//a temp matrix to store the result
	_TRAVERSAL for (int k = 0; k < 4; k++)
		result[i][j] += this->mat[i][k] * matrix.mat[k][j];
	_TRAVERSAL this->mat[i][j] = result[i][j];
}

void Matrix::print()
{
	_TRAVERSAL_ROW { 
		_TRAVERSAL_COLUMN
		cout << mat[i][j]<<" ";
	cout << endl;
	}
}

Matrix & Matrix::operator+=(const Matrix &matrix)
{
	_TRAVERSAL this->mat[i][j] =this->mat[i][j]+ matrix.mat[i][j];
	return *this;
}

float & Matrix::operator()(int row, int column)
{
	return mat[row][column];
}

float Matrix::operator()(int row, int column) const
{
	return mat[row][column];
}

int main()
{
	float a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	Matrix m1(a);
	Matrix m2(a);
	m1.multiply(m2);
	m1.print();
	/*
	90 100 110 120
	202 228 254 280
	314 356 398 440
	426 484 542 600
	*/
	return 0;
}


