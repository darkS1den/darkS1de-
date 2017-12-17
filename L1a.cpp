#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	float x , y , a , b ;
	cout << "Enter x: \n" << "x=";
	cin >> x;
	
	y = x * x * x;
	
	// Example1(a)
	a = y * (13 * x + 7) + 6 * x + 5;
	cout << endl;
	
	// Example2(b)
	b = y * (7 - 13 * x) - 6 * x + 5;
	
	cout << "a=" << a << endl;
	cout << "b=" << b;
	
	return 0;
	
	}
	
	
