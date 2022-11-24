#include <iostream>
using namespace std;

int main()
{
    int array[6][4] = {};
    int evenCounter = 0;
    srand(time(NULL));
    
    int evenArr[4] = {};
    
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 4; j++){
            array[i][j] = rand() % 20;
        }
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 6; j++){
            if(array[j][i] %2 == 0) evenCounter++;
        }
        evenArr[i] = evenCounter;
        evenCounter = 0;
    }
    
    cout << "Our array: " << endl;
    for(int i = 0; i < 6; i++){
        
         for(int j = 0; j < 4; j++){
            cout << array[i][j] << " ";
         }
         cout << endl;
    }
    cout << endl;

    for(int i = 0; i < sizeof(evenArr)/sizeof(evenArr[0]); i++){
        cout << evenArr[i] << " even element(s) in " << i+1 << " column" << endl;
    }
}