// 04/10/2022
#include <iostream>
#include <iomanip>
using namespace std;

// I got a little confused on what it was asking at first but I was able to find out

// *******************
// GLOBAL CONSTANTS
// *******************

const string NE = "North East",
             NW = "North West",
             SE = "South East",
             SW = "South West";



// *******************
// FUNCTION PROTOTYPES
// *******************

double getSales(string);
void findHighest(double, double, double, double);



// *******************
// MAIN
// *******************

int main() 
{
    double NE_sales,
           NW_sales,
           SE_sales,
           SW_sales;
       
    NE_sales = getSales(NE);
    NW_sales = getSales(NW);
    SE_sales = getSales(SE);
    SW_sales = getSales(SW);

    cout << endl;
    findHighest(NE_sales, NW_sales, SE_sales, SW_sales);

    return 0;
}


// Here it gets turned from whichever division we had for it to a local variable
// in the getSales function named division

double getSales(string division)
{

  double divSales;

  cout << "Enter the quarterly sales figure for the " << division << " division:  ";
  cin >> divSales;

  // INPUT VALIDATION
  while (divSales < 0)
  {
    cout << "Error, please enter a value larger than 0: ";
    cin >> divSales;
      
  }

  return divSales;
  
}



void findHighest(double NE_sales, 
                 double NW_sales, 
                 double SE_sales, 
                 double SW_sales)
{
  if (NE_sales > NW_sales && NE_sales > SE_sales && NE_sales > SW_sales) {
    cout << "The " << NE << " division had the highest sales this quarter." << endl;
    cout << "That division's sales were $" << setprecision(2) << fixed << NE_sales << endl;
  }
  if (NW_sales > NE_sales && NW_sales > SE_sales && NW_sales > SW_sales) {
    cout << "The " << NW << " division had the highest sales this quarter." << endl;
    cout << "That division's sales were $" << setprecision(2) << fixed << NW_sales << endl;
  }
  if (SE_sales > NE_sales && SE_sales > NW_sales && SE_sales > SW_sales) {
    cout << "The " << SE << " division had the highest sales this quarter." << endl;
    cout << "That division's sales were $" << setprecision(2) << fixed << SE_sales << endl;
  }
  if (SW_sales > NE_sales && SW_sales > NW_sales && SW_sales > SE_sales) {
    cout << "The " << SW << " division had the highest sales this quarter." << endl;
    cout << "That division's sales were $" << setprecision(2) << fixed << SW_sales << endl;
  }
  
    // To be completely honest for either program when I had it as an else statement 
    // it would keep executing even when one of the previous statements were true and while 
    // I have an idea why, I am not sure how to fix it so I made it an if statement
  if (NE_sales == NW_sales && NW_sales == SE_sales && SE_sales == SW_sales) {
    cout << "Each division had the same amount in sales this quarter, being " << setprecision(2) << fixed << SW_sales << " in sales.";
  }



}
