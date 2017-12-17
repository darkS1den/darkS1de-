#include <iostream>
#include <cmath>

using namespace std;
      
int main()
{
    float x1 , x2 , x3 , x4 , y1 , y2 , y3 , y4;
    
    //coords1
    cout << "Enter x1 , y1\n";
    cin >> x1 >> y1;
    
    //coords2
    cout << "Enter x2 , y2\n";
    cin >> x2 >> y2;
    
    //coords3
    cout << "Enter x3 , y3\n";
    cin >> x3 >> y3;
       
     if (x1 == x2) {
            x4 = x3;
        } else if (x1 == x3) {
            x4 = x2;
        } else {
            x4 = x1;
        }
     
     if (y1 == y2) {
           y4 = y3;
        } else if (y1 == y3) {
           y4 = y2;
        } else {
           y4 = y1;
        }
        
        //Checking
        if ((x1 == x2 && y2 == y3) || (x1 == x3 && y2 == y3) || (x1 == x3 && y1 == y2) || (x2 == x3 && y1 == y3) ){
        cout << "x4 = " << x4 << endl;
        cout << "y4 = " << y4 << endl;
        } else        
        cout << "This is not a rectangle" << endl;     
  	
    return 0; 
}

