// 04/10/2022
#include <iostream>
#include <iomanip>
using namespace std;


// *******************
// FUNCTION PROTOTYPES
// *******************

double salesBruh(double);


// *******************
// MAIN
// *******************


int main() {

  double pengu,
         cheapPengu;
  
  cout << "Enter the item's regular price: ";
  cin >> pengu;

 
  // INPUT VALIDATION
  while (pengu < 0)
  {
    
    cout << "Error 666!~ I cannot calculate the sale of an item that is negative >:(, give me a positive number NOW!!!: ";
    cin >> pengu;
    
  }

  cheapPengu = salesBruh(pengu);

  cout << "The sale price is $" << setprecision(2) << fixed << cheapPengu;

}


// *******************
// SALESBRUHDDY
// *******************

double salesBruh(double pengu)
{
  
  double linuxPenguin;

  linuxPenguin = pengu - (pengu * .20);

  return linuxPenguin;

}
