#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int array[3][3] = {};
    srand(time(NULL));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            array[i][j] = rand() % 20;
        }
    }
    
    cout << "Our array: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << array[i][j] << " ";
         }
         cout << endl;
    }
    
    int principal = 0, secondary = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)    
        {
            // Condition for principal diagonal
            if (i == j)
                principal += array[i][j];
  
            // Condition for secondary diagonal
            if ((i + j) == (n - 1))
                secondary += array[i][j];
        }
    }
  
    cout << "Principal Diagonal:" << 
             principal << endl;
    cout << "Secondary Diagonal:" << 
             secondary << endl;
}