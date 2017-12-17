#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
    setlocale(0, "");
    
    float a1 , b1 , c1 , a2 , b2 , c2 , x , y , xt;
    
    cout << "Enter \n" << "a1 , " << "b1 , " << "c1 , " << "a2 , " << "b2 , " << "c2 \n";
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    
    if (a1 >= 0 && b1 >= 0 && c1 >= 0 && a2 >= 0 && b2 >= 0 && c2 >= 0) {
    
    /*
	{1 == a1 * x / 2 + b1 * y = c1;
    {2 == a2 * x + b2 * y = c2;
    */
    
    //step1 (1)
	//a1 * x / 2 == c1 - (b1 * y);
	
	//step2
	xt = (c1 - (b1 * y)) / (a1 / 2);
	
	//step3 (2)
	//(a2 * x) + (b2 * y) == c2;
	
	//step4
	y = (c2 - (a2 * xt)) / b2;  
	
	//step5
	x = (c1 - (b1 * y)) / (a1 / 2);
	
    	cout << "x=" << x << endl; 
		cout << "y=" << y << endl;
		
    }    
    else
    	cout << "Не все числа положительные \n";
    
    system("PAUSE"); 
    return 0;
}

