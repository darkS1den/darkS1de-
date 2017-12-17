#include<iostream>
#include<cmath>

using namespace std;

int main () {
	
    int n, m, a, b;
    
    cout << "N - ";
    cin >> n;
    cout << "--------\nFill the matrix\n";
    
    int **arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
    	arr[i] = new int [n];
    	for (int j = 0; j < n; ++j) 
		cin >> arr[i][j];
   	}
   	for (int i = 0; i < n; i++)
   		for (int j = 0; j < n; j++)
   			if (arr[i][j] < 0) {
			   	cout << "Error. Some entered numbers are not an integer";
   				return 0;
			   }

	//max
	int max = arr[0][0];
	for (int i = 0; i < n; ++i)
		if (arr[i][i] > max)
			max = arr[i][i];
	cout << "max in basic line = " << max << endl;
		
	//max2
	int max2 = arr[n-1][0];	
	int i = 0;
	for (int j = n - 1; j >= 0; --j)
	{
		if (arr[i][j] > max2)
			max2 = arr[i][j];
		i++;
	}
									
	cout << "max in by-side line = " << max2;
	cout << "\n|a-b| = "<< abs(max-max2) << endl;;
							
   	for (int i = 0; i < n; i++) 
		delete [] arr[i]; 
		delete [] arr;
		
system("Pause");

return 0;
}
