// 04/24/2022
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


// *******************
// FUNCTION PROTOTYPES
// *******************

// didnt use any functions other than main

// *******************
// MAIN
// *******************

// my guess is the program doesnt need input or anything?

int main() 
{
  double stock[10] = {96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9};
  double added = 0, average = 0;
  
  cout << "Welcome to stock average calculator!" << endl;
  
  for (int i=0; i<10; i++)
  {
    added = added + stock[i];
    average = added / 10;
    
  }

  cout << "You paid $" << added << " in total for the stock. The average price paid for the stock is $" << average << "." << endl;


return 0;
  
}
