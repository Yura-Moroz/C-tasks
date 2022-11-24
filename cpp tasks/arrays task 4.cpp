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
    int number = 0;
    cout << "Enter your number: ";
    cin >> number;
    int array[10] = {};
    int arrayLength = sizeof(array) / sizeof(array[0]);
    
    srand(time(NULL));
    
    cout << "Our array: " << endl;
    for(int i = 0; i < arrayLength; i++){
        array[i] = rand() % 101;  
        cout << array[i] << " "; 
    }
    cout << endl;
    
    int counter = 0;
    cout << "Numbers greater than " << number << ":" << endl;
    for(int i = 0; i < arrayLength; i++){
        if(array[i] > number){
            cout << array[i] << " ";
            counter++;
        }
    }
    if(counter == 0) cout << "There are no numbers...";
    
    return 0;
}