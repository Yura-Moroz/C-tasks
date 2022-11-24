/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
  int c0 = 0;
  int counter = 0;
  cout << "What is your number? ";
  cin >> c0; 
  
  while(c0 != 1){
      
      if(c0 %2 == 0){
          c0 /= 2;
          counter++;
          cout << c0 << "\n";
      }else{
          c0 = c0*3+1;
          counter++;
          cout << c0 << "\n";
      }
  }
  cout << "steps = " << counter; 
}