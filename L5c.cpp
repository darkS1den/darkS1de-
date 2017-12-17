#include <iostream>
#include<cmath>

using namespace std;

float **func (int n , int l , float **a , int m , float **arr);

int main () {

	int rows , cols , cols2 , rres , cres , k;
	
	cout << "Enter the size of the matrix A[n][m] \n n m\n ";
	cin >> rows >> cols;
	cout << "--------\nFill the matrix\n";
	
	float **a = new float* [rows];
	for (int i = 0; i < rows; i++)
	{
		a[i] = new float [cols];
		for (int j = 0; j < cols; ++j)
		cin >> a[i][j];
	}
	
	cout << "\nEnter the size of the matrix B[m][l] \n l - ";
	cin >> cols2 ;
	cout << "--------\nFill the matrix\n";
	
	float **arr = new float* [cols];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new float [cols2];
		for (int j = 0; j < cols2; ++j)
		cin >> arr[i][j];
	}
	
	float **res = new float* [rows];
	for (int i = 0; i < rows; ++i)
		res[i] = new float [cols2];
		
	for (int i = 0; i < rows; ++i)
		for (int j = 0; i < cols2; ++j)
			res[i][j] = 0;
		
	res = func(rows , cols2, a , cols , arr);
			
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols2; j++)	
			cout << "  " << res[i][j];
		cout << endl;
	}
	
	for(int i = 0; i < rows; i++)
		delete [] res [i];
	delete [] res;
	for(int i = 0; i < rows; i++)
		delete [] a [i];
	delete [] a;
	for(int i = 0; i < cols; i++)
		delete [] arr [i];
	delete [] arr;
	system("Pause");
	return 0;
}

	float** func (int rows , int cols2 , float **a , int cols , float **arr) {
		
	int cres = 0 , rres , i = 0 , j = 0 , k ;
	float **res = new float* [rows];
	for (i = 0; i < rows; ++i)
		res[i] = new float [cols2];

	for(k = 0; k < cols2; k++)
	{
		for (rres = 0; rres < rows; rres++)
		{
			res[rres][cres] = 0;
			for (j = 0; j < cols ; j++)
				res[rres][cres] += a[i][j] * arr[j][k];
			i++;
		}
		i = 0;
		cres++;
	}
	return res;
	}
	
	
	
	
	
	
	
	
	
	
	
	
