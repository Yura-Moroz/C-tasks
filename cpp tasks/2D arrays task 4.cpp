#include <iostream>
using namespace std;

int main()
{
    int array[5][7] = {};
    int sum = 0;
    srand(time(NULL));
    
    int sumArr[7] = {};
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 7; j++){
            array[i][j] = rand() % 20;
        }
    }
    
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 5; j++){
            sum += array[j][i];
        }
        sumArr[i] = sum;
        sum = 0;
    }
    
    cout << "Our array: " << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 7; j++){
            cout << array[i][j] << " ";
         }
         cout << endl;
    }
    cout << endl;

    for(int i = 0; i < sizeof(sumArr)/sizeof(sumArr[0]); i++){
        cout << "The sum of "<< i+1 << " column is " << sumArr[i] << endl;
    }
}