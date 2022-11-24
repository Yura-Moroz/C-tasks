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
    
    int maxElem = -2147483648;    
    int maxElemPosition = 0;
    int minElem = 2147483647;
    int minElemPosition = 0;
    
    for(int i = 0; i < arrayLength; i++){
        if(array[i] > maxElem){
            maxElem = array[i];
            maxElemPosition = i;
        }
        if(array[i] < minElem){
            minElem = array[i];
            minElemPosition = i;
        }
    }
    int temp = array[maxElemPosition];
    array[maxElemPosition] = array[minElemPosition];
    array[minElemPosition] = temp;
    cout << "Array after changes: " << endl;
    for(int i = 0; i < arrayLength; i++){
        cout << array[i] << " ";    
    }
}