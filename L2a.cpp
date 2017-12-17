#include<iostream>
#include<cmath>

using namespace std;

int main ()
{    
    int n , m , normal , reversed;
    cout << "Enter 2 numbers [n,m]" << endl;
    cin >> n >> m;    
    cout << "_______________\n" ;
    for (n; n <= m; n++)
	{
		normal = n;
		reversed = 0;
		while (normal > 0)
		{
			reversed = reversed*10 + normal%10;
			normal /= 10;
		}

		if (reversed > n * 1.2 && reversed < n * 1.25)
		{
			cout << reversed << "  ";
			cout << n << endl;
		}
	}
  system("Pause");
 	 return 0;
}
