// 05/01/2022
#include <iostream>
#include <vector>
using namespace std;

int main() {

  // This program will be using a vector in order to have a value selected and then have something done that corresponds to it.
  cout << "Welcome to Joe's Car Care Shop!" <<   endl;
  cout << "Here we offer a variety of services:" << endl;
  cout << "1. Oil Change" << endl;
  cout << "2. Tire Rotation" << endl;
  cout << "3. Battery Check" << endl;
  cout << "4. Break Inspection" << endl << endl;

  // The vector with 4 defined values (0 to 3 or 1 to 4 basically)
  vector<int>prices{ 45, 22, 15, 10 };

  // Input validation

  int uN;
  
  cout << "Select service number: ";
  cin >> uN;
  while(uN < 1 || uN > 4)
    {

      cout << "INVALID CHOICE" << endl;
      cout << "Please re-enter: ";
      cin >> uN;

    }

  // line break for style
  cout << endl;

  // Displays the price that corresponds to the answers given
  cout << "Price of selected service: $";
    if (uN == 1)
  {
    cout << prices[0];
  }
    if (uN == 2)
  {
    cout << prices[1];
  }
    if (uN == 3)
  {
    cout << prices[2];
  }
    if (uN == 4)
  {
    cout << prices[3];
  }

}
