// 04/24/2022
#include <iostream>
using namespace std;

// *******************
// MAIN
// *******************


int main() 
{

  int array[10],
      i;

  cout << "This program will ask you to enter ten values, then it will determine the largest and smallest of the values you entered." << endl << endl;


  for (i=0; i<10; i++) {
    cout << "Enter an integer value: ";
    cin >> array[i];
  }

  // LARGEST VALUE
  // I got inspired by this online to be honest, but I understood how to do it
  
  int largest, pos;
  largest = array[0];
  
  for(i=1; i<10; i++) 
  {
    if(array[i]>largest) 
    {
      largest = array[i];
      pos = i;
    }
  }
  cout << endl << "The largest value entered is " << largest << endl;


  // SMALLEST VALUE

  int smallest;
  smallest = array[0];
  
  for(i=1; i<10; i++) 
  {
    if(array[i]<smallest) 
    {
      smallest = array[i];
      pos = i;
    }
  }
  cout << "The smallest value entered is " << smallest;
  
  
}
