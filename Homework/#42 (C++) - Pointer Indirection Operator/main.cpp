// 05/15/2022
#include <iostream>
#include <iomanip>
using namespace std;


int main() {


  int x = 23;

  // We are assigning our pointer to a variable which in this case is X
  // *** Syntax rules ***
  // Must use * to declare its a ptr
  // Must assign to ADDRESS of variable (so &x instead of x)
  // No mixing types
  // // int pointer . int variable
  // // double pointer . double variable
  int *ptr = &x;

  // Displaying it as *ptr which gives us the value of the variable being pointed at, instead of ptr which gives us the address of the variable being pointed at
  // TLDR
  // *ptr = Variable value
  // ptr = Variable address
  cout << "The value of the stored variable is " << *ptr << endl;

}
