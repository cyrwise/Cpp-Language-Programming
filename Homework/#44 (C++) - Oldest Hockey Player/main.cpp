// 05/15/2022
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
  
  int *ptr = nullptr,
      SIZE;
      

  
  cout << "Enter the number of players on the hockey team: ";
  cin >> SIZE;

  ptr = new int [SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    cout << "Enter age of hockey player #" << (i+1) << ": ";
    cin >> ptr[i];
  }
  
  cout << endl;

  //for(int i = 1; i < SIZE; i++)
  //{

    //if(ptr[0] < ptr[i])
    //{
      //ptr[0] = ptr[i];
    //}
  //}

  int max = 0;
  for (int j = 0; j < SIZE; j++)
  {
    if (ptr[j] > max)
      max = ptr[j];      
  }

  
  //cout << endl << "Age of the oldest player: " << ptr[0];

  cout << endl << "Age of the oldest player: " << max;

  delete [] ptr;
  ptr = nullptr;

  return 0;

}
