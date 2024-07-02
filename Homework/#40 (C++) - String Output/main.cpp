// 05/15/2022
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main() {

  string x;
  x = "Hello!";

  cout << "The address of x is " << &x << endl;
  cout << "The size of x is " << sizeof(x) << " bytes" << endl;
  cout << "The value in x is " << x << endl;

}
