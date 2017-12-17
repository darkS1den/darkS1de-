#include <iostream>

using namespace std;

int main() {
    
	int n , m , counter = 1 , action , tumb = 1;
	
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
		
	int max = a[0][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (a[i][j] > max)
				max = a[i][j];
	cout << "\nmax = " << max ;	
			
	float *res = new float [m];					
	int count = 0 , l = 0, c;
	while (tumb)
	{
		count = 0;
		l = 0;
			if (counter > 1) {
				cout << "____________________________\n       Select an action\n1 - re-enter    2 - show matrix again   3 - exit \nselect - ";
				cin >> action;
				if (action == 2)
				{
					cout << "\n\n";
					for (int i = 0; i < n; i++)
					{
						for (int j = 0; j < m; j++)	
							cout << a[i][j] << "  ";
						cout << "\n";
					}
				continue;
				}
				if (action == 3) 
					return 0;
			
			} 
			
		cout << "\n\nEnter number for checking a number of inputs - ";
		cin >> c;
		
		for (int i = 0; i < m; i++)
			res[i] = 0;
			
		for (int j = 0; j < m; j++)
		{
			for(int i = 0; i < n; i++)
				if (a[i][j] == c) 
					count++;
			res[l] = count;
			l++;
			count = 0;
		}
		
		
		for (int i = 0; i < m; i++)
		{
				cout << "\n(" << i << ")  " <<  res[i] << "            ";
				cout << "(" << i << ")  " <<  res[i] / max;	
		}
		cout << endl;
		counter++;
		c = 0;
	}
	
	for (int i = 0; i < n; i++) 
		delete [] a[i]; 
		delete [] a;
		delete [] res;
		
	cout << endl;		
	return 0;
}
