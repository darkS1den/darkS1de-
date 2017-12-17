#include <iostream>

using namespace std;

int main() {
	int n , m , l , x , y , k;
	
	
	cout << "Enter the size of the matrix A[n][m] \n n m\n ";
	cin >> n >> m;
	cout << "--------\nFill the matrix\n";
	
	int **a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int [m];
		for (int j = 0; j < m; ++j)
		cin >> a[i][j];
	}
	
	cout << "\nEnter the size of the matrix B[m][l] \n l - ";
	cin >> l ;
	cout << "--------\nFill the matrix\n";
	
	int **arr = new int* [m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int [l];
		for (int j = 0; j < l; ++j)
		cin >> arr[i][j];
	}
	
	int **res = new int* [n];
	for (int i = 0; i < n; ++i)
		res[i] = new int [l];
		
	y = 0;	
	int i = 0;
	int j = 0;

	for(k = 0; k < l; k++)
	{
		for (x = 0; x < n; x++)
		{
			res[x][y] = 0;
			for (j = 0; j < m ; j++)
				res[x][y] += a[i][j] * arr[j][k];
			i++;
		}
		i = 0;
		y++;
	}
			
	cout << "\n----------------------------------\n ";
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < l; j++)	
	cout << "  " << (-1) * res[i][j];
	
	cout << "\n___________________________________________\n";

	system("Pause");
	return 0;
}
