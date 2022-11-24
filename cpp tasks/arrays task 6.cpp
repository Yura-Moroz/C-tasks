#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int array[20] = {};
    int arrayLength = sizeof(array) / sizeof(array[0]);
    
    srand(time(NULL));
    
    cout << "Our array: " << endl;
    for(int i = 0; i < arrayLength; i++){
        array[i] = rand() % 100 - 50;  
        cout << array[i] << " "; 
    }
    cout << endl;
    
    int counter = 0;
    for(int i = 0; i < arrayLength; i++){
        if(array[i] == 0){
            counter = 1;
            cout << "The first zero element index is: " << i << endl;
            break;
        }
    }
    if(counter == 0) cout << "There is no zero element in array";
    
    return 0;
}