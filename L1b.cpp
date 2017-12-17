#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float a , b , c;
	cout << "Enter a , b , c : \n" ;
	cin >> a >> b >> c;
	
	if ( a <= b && b <= c ) {
		cout << "a <= b <= c \n";
		a = a / 2;
		b = b / 2;
		c = c / 2;
	}
	
	if ( a >= b && b >= c ) {
		cout << "a >= b >= c \n";
		a = abs(a); 
		b = abs(b);
	 	c = abs(c);
	}
	
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	
	system("pause");
	return 0;
	
}


