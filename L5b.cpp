#include <iostream>
#include<cmath>

using namespace std;

float func (float a, float b, float step);


int main(int argc, char* argv[]) {
	float a , b , step , res;
	cout << "Please, enter the interval [a , b]\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "Specify step\n";
	cin >> step;
	for (a; a <= b; a += step) {
		res = func (a , b , step);
		cout << "y = " << res << endl;		
	}
}

float func (float a, float b, float step) {
	float res = 0;
	res = pow(a , 3) + (pow (a , 3) / (pow(a - 1 , 3)) + (3 * pow(a , 2)) / (a - 1) - 1);
	return res;
}

