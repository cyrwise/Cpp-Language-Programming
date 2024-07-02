// 04/03/2022
#include <iostream>
#include <iomanip>
using namespace std;

// *************************
// ``````````PREMIUM // calcInsurance
// *************************
 double calcInsurance(int currentyear, int birthyear)
{

  double premium;
  int age;
  int decades;

  age = currentyear - birthyear;
  decades = age / 10;
  
  premium = (decades + 15) * 20;
  
  cout << "Your annual premium will be $" << premium << ".";
  return;
  
}

// *************************
// ``````````MAIN
// *************************
int main() 
{

  int currentyear;
  int birthyear;

  // HEADER
  cout << "Harrison Group Life" << endl;
  cout << "Annual Insurance Premium Calculator" << endl << endl;

  
  // Gets current and birth years
  cout << "Enter the current year: ";
  cin >> currentyear;

  cout << "Enter the birth year: ";
  cin >> birthyear;

  // Valdiation loop:
  // // arguably I do not think this is needed so I will not include one

  
  // call the calcInsurance function
  // and pass both dates
  cout << endl;
  calcInsurance(currentyear, birthyear);
  
}
