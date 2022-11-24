/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    double pi4 = 0; 
    long n = 0;
    int divider = 1;
    
    cout << "Number of iterations?";
    cin >> n;
    
    for(int i = 0; i < n; i++){
    
    if(i %2 == 0){
        pi4 += 1./divider; 
        divider += 2;
    }else{
        pi4 -= 1./divider;    
        divider += 2;
        }
    }
    
    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;
}