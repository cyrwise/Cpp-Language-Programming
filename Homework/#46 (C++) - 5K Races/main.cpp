// 05/15/2022
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
  
  double *ptr = nullptr;
      int num_of_runs;
      

  cout << "Hello Kathy!" << endl;
  cout << "Enter the amount of races to include in the calculation: ";
  cin >> num_of_runs;

  ptr = new double[num_of_runs];

  cout << endl << "Enter the finishing time for" << endl;
  for (int i = 0; i < num_of_runs; i++)
    {
      cout << "Race " << (i+1) << ": ";
      cin >> ptr[i];
    }
  
  cout << endl;

  
  double total = 0.0, average = 0.0;
  for (int j = 0; j < num_of_runs; j++)
    {
      total += ptr[j];
    }
  average = total / num_of_runs;


  double lowest = ptr[0];
  for (int j = 0; j < num_of_runs; j++)
  {
    if (ptr[j] < lowest)
      lowest = ptr[j];

      // test
      // cout << endl << ptr[j];
      // cout << endl << lowest;
  }
  
  
  cout << "Average Finishing Time: " << average << endl;
  cout << "Lowest Finishing Time: " << lowest << endl;

  delete [] ptr;
  ptr = nullptr;

  return 0;
  
}
