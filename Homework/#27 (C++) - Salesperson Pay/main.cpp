// 04/10/2022
#include <iostream>
#include <iomanip>
using namespace std;


// *******************
// FUNCTION PROTOTYPES
// *******************

double findCommie(double);


// *******************
// MAIN
// *******************


int main() {

  double uSales,
         comRade,
         comMoney;
  
  cout << "Enter the monthly sales: ";
  cin >> uSales;

 
  // INPUT VALIDATION
  //-------------------
  while (uSales < 0)
  {
    cout << endl;
    
    cout << "Error 666!~ Enter a positive value: ";
    
    cin >> uSales;
    
  }
  
  cout << endl;

  // Find Commission Rate and return it
  comRade = findCommie(uSales);

  comMoney = uSales * comRade;
  
  cout << "The commission pay is $" << setprecision(2) << fixed << comMoney;

// Do we have to find a way to use commas in our number format?
  // for example, 2,195.90
// I do not know how to do it yet
  
}


// *******************
// FIND COMMISSION RATE (FINDCOMMIE)
// *******************

double findCommie(double uSales)
{
  
  double commission;

    if (uSales < 10000) 
    {
      
      commission = 0.10;
        
    } 
    else if (uSales >= 10000 && uSales <= 14999)
    {
      
      commission = 0.12;
        
    }
    else if (uSales >= 15000 && uSales <= 17999)
    {
      
      commission = 0.14;
        
    }
    else if (uSales >= 18000 && uSales <= 21999)
    {
      
      commission = 0.16;
        
    }
      else if (uSales >= 22000)
    {
      
      commission = 0.18;
        
    }

  return commission;

  
}
