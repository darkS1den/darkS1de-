#include<iostream>
#include<cmath>

using namespace std;


int main () {
	
float x , y;

for (x = 3.3; x < 6; x+= 0.3) {
	y = sqrt((pow(x , 2) + 10 * x) / 3);
	cout << y << "  " << x << endl;
	}	
	system("Pause");
	
}
	
