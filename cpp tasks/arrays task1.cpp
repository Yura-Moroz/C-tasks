/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void bubbleSort(int array[], int arrayLength){
    
    while(arrayLength--){
        
        bool swapped = false;
        
        for(int i = 0; i < arrayLength; i++){
                if(array[i] > array[i+1]){
                    swap(array[i], array[i+1]);
                    swapped = true;
                }
        }
        
        if(swapped == false)
        break;
    }
}

int main()
{
    int m[] = {3, 2, 4, 6, 1, 5, 7, 10, 13, 21, 14, 8};
    int mLength = sizeof(m) / sizeof(m[0]);
    
    cout << "Array before sorting:";
    for(int i = 0; i < mLength; i++){
        cout << ' ' << m[i]; 
    }
    cout << endl;
    
    bubbleSort(m, mLength);
    
    cout << "Array after sorting:";
    for(int i = 0; i < mLength; i++){
        cout << ' ' << m[i]; 
    }
    return 0;
}