// 05/15/2022
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
  
  int *ptr = nullptr,
      SIZE;
      
  
  cout << "Enter the desired amount of days to average your steps: ";
  cin >> SIZE;

  ptr = new int [SIZE];

  cout << endl << "Enter the amount of steps for" << endl;
  for (int i = 0; i < SIZE; i++)
    {
      cout << "Day " << (i+1) << ": ";
      cin >> ptr[i];
    }
  
  cout << endl;

  
  int total = 0;
  for (int j = 0; j < SIZE; j++)
    {
      total += ptr[j];      
    }

  // To avoid integer division
  int average;
  for (int k = 0; k < SIZE; k++)
    {
      average += ptr[k];
    }
  average = average / SIZE;

  
  cout <<"Total Steps: " << total << endl;
  cout <<"Average Steps: " << average << endl;

  delete [] ptr;
  ptr = nullptr;

  return 0;

}
