#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
class Matrix
{
private:
	int n; // Ma trận vuông cấp n
	int **data;
public:
	friend istream& operator>>(istream &in, Matrix &m1);
	friend ostream& operator<<(ostream& out, Matrix m1);
	friend Matrix operator+(Matrix m1, Matrix &m2);
	friend Matrix operator-(Matrix m1, Matrix &m2);

	Matrix();
	Matrix(int);
	~Matrix();
};

Matrix::Matrix()
{
    n=4;
}

Matrix::Matrix(int n1)
{
	n = n1;
	data = new int*[n];
}


Matrix::~Matrix()
{
	n = 0;
	delete[]data;
}


istream& operator>>(istream& in, Matrix& m1)
{
	cout << "Nhap vao cap cua ma tran:";
	in >> m1.n;
	m1.data = new int* [m1.n];
	for (int i = 0; i < m1.n; i++)
	{
		*(m1.data + i) = new int[m1.n];
	}
	for (int i = 0; i < m1.n; i++)	
	{
		for (int j = 0; j < m1.n; j++)
		{
			cout << "a[" << i << "]" << "[" << j << "]:";
			in >> m1.data[i][j];
		}
	}
	return in;
}

ostream& operator<<(ostream& out, Matrix m1)
{
	for (int i = 0; i < m1.n; i++)
	{
		for (int j = 0; j < m1.n; j++)
		{
			out << m1.data[i][j] << "\t";
		}
		cout << endl;
	}
	return out;
}


Matrix operator+(Matrix m1, Matrix &m2)
{
	Matrix m3(m1);
	for (int i = 0; i < m1.n; i++)
	{
		for (int j = 0; j < m2.n; j++)
		{
			m3.data[i][j] = m1.data[i][j] + m2.data[i][j];
		}
	}
	return m3;
}


Matrix operator-(Matrix m1, Matrix& m2)
{
	Matrix m3(m1);
	for (int i = 0; i < m1.n; i++)
	{
		for (int j = 0; j < m2.n; j++)
		{
			m3.data[i][j] = m1.data[i][j] - m2.data[i][j];
		}
	}
	return m3;
}



int main()
{
	Matrix M1, M2, M3(4);
	cout << "Nhap vao ma tran M1:" << endl;
	cin>> M1;
	cout << "Ma tran M1:" << endl;
	cout << M1;
	cout << "Nhap vao ma tran M2:" << endl;
	cin >> M2;
	cout << "Ma tran M2:" << endl;
	cout << M2;
	Matrix M4 = M1 + M2;
	cout << "Tong ma tran M1 + M2:"<<endl<<M4 << endl;
	Matrix M5 = M3 - M2;

	return 0;
}