#include <iostream>
#include<cmath>

using namespace std;

float func_all (int n);
float func_one (int n); 


int main(int argc, char* argv[]) {
	int n , k ;
	float result;
	cout << "n - ";
	cin >> n;
	cout << "1 - all\n2 - one\n";
	cin >> k;
	if (k == 1)	
		result = func_all(n);
	else
		result = func_one(n);
    cout << result << endl; 
	system("pause");	
}

float func_all (int n) {
	float result = 0;
	for (int i = 1; i <= n; i++)
		result += pow(i , 2) / (i + pow(i + 1 , 2));
	return result;
}

float func_one (int n) {
	float result = pow(n , 2) / (n + pow(n + 1 , 2));
	return result;
}
