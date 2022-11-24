#include <iostream>
using namespace std;

int main()
{
    int array[4][7] = {};
    int max = array[0][0];
    int min = array[0][0];
    srand(time(NULL));
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 7; j++){
            array[i][j] = rand() % 20;
        }
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 7; j++){
            if(array[i][j] > max) max = array[i][j];
        }
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 7; j++){
            if(array[i][j] < min) min = array[i][j];
        }
    }
    
    cout << "Our array: " << endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 7; j++){
            cout << array[i][j] << " ";
         }
         cout << endl;
    }
    cout << endl;
    cout << "Max array value is: " << max << endl;
    cout << "Min array value is: " << min;
}