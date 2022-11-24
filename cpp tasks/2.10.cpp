/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter a positive integer grater than 1: ";
    
    while(true){
        
        cin >> n;
        if(n > 1)
        break;
        else
        cout << "Invalid value _( \n Please try again:";
    }
    
    if(n > 45){
            cout << "Sorry, the side size is too big";
            return 0;
        }
    
    cout << "+";
    for(int i = 0; i < n; i++){
        cout << '-';
    }
    cout << '+' << endl;
    
    for(int i = 0; i < n; i++){
        cout << '|';
        for(int i = 0; i < n; i++){
            cout << ' ';    
        }
        cout << '|' << endl;
    }
    cout << '+';
    
    for(int i = 0; i < n; i++){
        cout << '-';
    }
    cout << '+' << endl;
    return 0;
}