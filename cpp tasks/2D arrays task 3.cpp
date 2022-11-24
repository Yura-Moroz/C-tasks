#include <iostream>
using namespace std;

int main()
{
    int array[4][6] = {};
    int sum = 0;
    srand(time(NULL));
    
    int sumArr[4] = {};
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 6; j++){
            array[i][j] = rand() % 20;
        }
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 6; j++){
            sum += array[i][j];
        }
        sumArr[i] = sum;
        sum = 0;
    }
    
    cout << "Our array: " << endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 6; j++){
            cout << array[i][j] << " ";
         }
         cout << endl;
    }
    cout << endl;

    for(int i = 0; i < sizeof(sumArr)/sizeof(sumArr[0]); i++){
        cout << "The sum of "<< i+1 << " row is " << sumArr[i] << endl;
    }
}