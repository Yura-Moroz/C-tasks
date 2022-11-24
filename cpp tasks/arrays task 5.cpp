/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int array[10] = {};
    int arrayLength = sizeof(array) / sizeof(array[0]);
    
    srand(time(NULL));
    
    cout << "Our array: " << endl;
    for(int i = 0; i < arrayLength; i++){
        array[i] = rand() % 101;  
        cout << array[i] << " "; 
    }
    cout << endl;
     
    int maxElement = -2147483648;
    int secondMaxElem = -2147483648;
    
    for(int i = 0; i < arrayLength; i++){
        if(array[i] > maxElement) maxElement = array[i];
    }

    for(int i = 0; i < arrayLength; i++)
      if(array[i] > secondMaxElem && array[i] < maxElement) secondMaxElem = array[i];
 
    cout << "First max element: " << maxElement << endl;
    cout << "Second max element: " << secondMaxElem;
}eturn 0;
}