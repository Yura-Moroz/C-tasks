#include <iostream>
#include <string>
using namespace std;

int main()
{
    int array[4][3] = {};
    int arrayLength = sizeof(array) / sizeof(array[0]);
    int evenCounter = 0;
    srand(time(NULL));
    
    cout << "Our array: " << endl;
    for(int i = 0; i < arrayLength; i++){
        for(int j = 0; j < 3; j++){
        array[i][j] = rand() % 20; 
        if(array[i][j] %2 == 0) evenCounter++;
        
        // Output:
        if(j != arrayLength -1) cout << array[i][j] << ", "; 
        else cout << array[i][j] << ". Even counter in this row is: " << evenCounter << endl;
        }
        evenCounter = 0;
    }
    cout << endl;
}