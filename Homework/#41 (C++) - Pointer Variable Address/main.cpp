// 05/15/2022
#include <iostream>
#include <iomanip>
using namespace std;


int main() {

  int x = 1979;

  // This is how we initialize a pointer, using the special value nullptr which was added in c++ 11 to represent the address 0. Im initializing it as a ptr by calling it int *ptr
  int *ptr = nullptr;

  // Assigning the pointer to the address of our x value, cannot use * in ptr here
  ptr = &x;

  // We display ptr, which stores the address of x, and will therefore display the address of x
  // important note is that I am not displaying it as *ptr, because then that would give the value of x rather than its address (which we have set to 1979 for fun)
  
  // TLDR
  // *ptr = Pointed Variable's Value
  // ptr = Pointed Variable Address
  cout << "The pointer stores the address of the number variable as " << *ptr;
  
}
