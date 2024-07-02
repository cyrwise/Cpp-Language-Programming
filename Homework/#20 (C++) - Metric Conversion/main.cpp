// 04/03/2022
#include <iostream>
#include <iomanip>
using namespace std;

// *************************
// ``````````CENTIMETERS // calcCentimeters
// *************************
double calcCentimeters(float uN)
{

  double centimeters;
  centimeters = uN*(2.54);
  cout << uN << " inches is " << centimeters << " centimeters";
  return;
  
}



// *************************
// ``````````LITERS // calcLiters
// *************************
double calcLiters(float uN)
{

  double liters;
  liters = uN*(3.7854);
  cout << uN << " gallons is " << liters << " liters";
  return;
  
}




// *************************
// ``````````MAIN
// *************************
int main() 
{

  float uN;

  // Gets number to convert to both inches and centimeters from the user
  cout << "Enter a number to convert inches to centimeters and gallons to liters: ";
  cin >> uN;

  // Valdiation loop
  while (uN < 0)
  {
    cout << "Beep boop, sorry :(. I have moral obligations that conflict with me converting a negative number. Because of this you will need to send me a positive number instead: ";
    cin >> uN;
  }

  // call centimeters converting function, passing value
  calcCentimeters(uN);
  cout << endl;
  // call liters converting function, passing value
  calcLiters(uN);
  
}
