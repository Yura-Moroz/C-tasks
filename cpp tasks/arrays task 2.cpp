/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int m[] = {3, -11, 2, 4, 6, -1, -2, 1, 5, 7, 10, -2, 13, -5, 21, 14, -12, 8, -3};
    int mLength = sizeof(m) / sizeof(m[0]);
    int maxElementPosition;
    
    cout << "Array before changes:";
    for(int i = 0; i < mLength; i++){
        cout << ' ' << m[i]; 
    }
    cout << endl;
    
    int maxElement = -2147483648;
    for(int i = 0; i < mLength; i++){
       if(m[i] > maxElement){
       maxElement = m[i];
       maxElementPosition = i;
       }
    }
    
    for(int i = 0; i < mLength; i++){
        if(m[i] < 0 & i < maxElementPosition){
            m[i] = 0;
        }
    }
    
    cout << "Array after changes:";
    for(int i = 0; i < mLength; i++){
        cout << ' ' << m[i]; 
    }
}