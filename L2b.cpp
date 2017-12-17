#include<iostream>

using namespace std;


int main () {
	
	unsigned int suma = 0, d = 1, num1 , num2;
	
	cout << " 1    2\n";
	
	for (num1 = 101; num1 < 200; num1++)
		for (num2 = 101; num2 < 200; num2++){
		suma = 0;
		d = 1;
			do
		{
			if (num2 % d == 0)
			suma += d;					
			d++;
		}
			while (d < num2);
			if (suma == num1) 
				cout << num1 << "  " << num2 << endl;	
		}
		system("Pause");
		return 0;
	}
	
