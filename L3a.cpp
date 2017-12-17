#include <iostream>

using namespace std;

int main() {
	int n;
	
	cout << "array [N], N = ";
	cin >> n;
	cout << "Fill the matrix\n";
	
	float *inp = new float[n];
	for (int i = 0; i < n; i++)   
		cin >> inp[i];
		
	float *arr = new float[n];
	
	for (int lap = 0, j = 0; lap < 3; lap++)
		for (int i = 0; i < n; i++) 
        {
			if (lap == 0 && inp[i] < 0)
				arr[j++] = inp[i];
			else if (lap == 1 && inp[i] == 0)
				arr[j++] = inp[i];
			else if (lap == 2 && inp[i] > 0)
				arr[j++] = inp[i];
		}
		
	delete [] inp;

	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
		
	delete [] arr;
	
    system("pause");
	return 0;
}
