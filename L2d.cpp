#include<iostream>
#include<cmath>
using namespace std;

int main () {
	
	float step , mnoj , mnoj1 , mnoj2 , mnoj3 , fact , suma , x , n , f;
	
	cout << "Enter a number of terms in the series \n"; 
	cin >> n;
	cout << "Enter x = ";
	cin >> x;
	
	mnoj1=2;
	mnoj2=5;
	f = 2;
	fact = 1;
	step = 1;
	suma = 1;
	
	for (int i = 1; i < n; i++)
	{
		mnoj = mnoj1;
		suma += (mnoj / fact * pow((x / 2) , step));
	
		
		//faktorial
		fact = fact * f;
		f++;
		
		//mnojniki
		mnoj3 = mnoj1 * mnoj2;
		mnoj1 = mnoj2;
    	mnoj2 =	mnoj3;
    	
    	//stepin;
    	step++;
	}

cout << "suma = " << suma << endl;

system("Pause");
return 0;	
	
}
