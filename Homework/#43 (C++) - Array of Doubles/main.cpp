// 05/15/2022
#include <iostream>
#include <iomanip>
using namespace std;


int main() {

  // Good habit check, making a changeable size for my array
  // I wont use it for initializing the array since that takes more time, however where I use size later for the for loop Its useful.
  const int SIZE = 5;

  // Initializing my one dimensional array, ds, of doubles
  double ds[] = {2.6, 4.5, 7.8, 9.9, 22.2};

  // Pointers can be set for whole arrays, which I use here (same syntax with *)
  // (also only use name of array in assigning)
  double *dsPtr = ds;

  // Here we are about to display all elements in the array, we start off the list with the beginning format
  cout << "The array values are:" << endl;

  // This for loop will display all elements in the array, which is usually done using a for loop that starts at element 0, and keeps displaying until it reaches its last element (SIZE)
  for (int i = 0; i<SIZE; i++)
  {

    // To use the pointer to display each element, this is the format.
    // *dsPtr displays the first element
    // *(dsPtr+i) with parenthesis needed to have it keep going
    // the way we set the ptr up is like an index, so we add one to change the element we are looking at / displaying.
    cout << *(dsPtr+i) << endl;
    
  }

}
