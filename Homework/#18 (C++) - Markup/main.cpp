// 04/03/2022
#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate: it accepts the wholesale price and markup percentage, then returns the retail price to a variable in main called retail
double calculateRetail(double wholesale, double markupPercent)
{
  double sum;
  sum = wholesale + (wholesale * (markupPercent/100));
  return sum;


  
}

int main() 
{

  double wholesale;
  double markupPercent;
  double retail;

  cout << "Enter the item's wholesale cost: ";
  cin >> wholesale;

  cout << "Enter the item's markup percentage (e.g. 15.0): ";
  cin >> markupPercent;
  
  while (markupPercent < 0)
  {
      cout << "Error 666~! Please enter a positive value: ";
      cin >> markupPercent;
  }
  

  // I watched included video to get context on where to put it and how to use it just to be sure
  retail = calculateRetail(wholesale, markupPercent);

  // finale
  cout << endl;
  cout << "The retail price is $" << setprecision(2)
 << fixed << retail << endl;
  
}
