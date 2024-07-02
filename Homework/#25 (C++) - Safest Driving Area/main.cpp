// 04/10/2022
#include <iostream>
#include <iomanip>
using namespace std;

// *******************
// GLOBAL CONSTANTS
// *******************

const string C = "central",
             W = "west",
             E = "east",
             S = "south",
             N = "north";



// *******************
// FUNCTION PROTOTYPES
// *******************

int getNumAccidents(string);
void findLowest(int, int, int, int, int);



// *******************
// MAIN
// *******************

int main() 
{
    int Cacc,
        Wacc,
        Eacc,
        Sacc,
        Nacc;
       
    Cacc = getNumAccidents(C);
    Wacc = getNumAccidents(W);
    Eacc = getNumAccidents(E);
    Sacc = getNumAccidents(S);
    Nacc = getNumAccidents(N);

    cout << endl;
    findLowest(Cacc, Wacc, Eacc, Sacc, Nacc);

    return 0;
}



// *******************
// GET NUMBER OF ACCIDENTS
// *******************


int getNumAccidents(string region)
{

  double accidents;

  cout << "How many accidents were reported in the " << region << " region of the city:  ";
  cin >> accidents;

  // INPUT VALIDATION
  while (accidents < 0)
  {
    cout << "Error, please enter a value larger than 0: ";
    cin >> accidents;
      
  }

  return accidents;
  
}



void findLowest(int Cacc, 
                int Wacc, 
                int Eacc, 
                int Sacc, 
                int Nacc)
{
  if (Cacc < Wacc && Cacc < Eacc && Cacc < Sacc && Cacc < Nacc) {
    cout << "The city's " << C << " region had the lowest number of reported accidents last year." << endl;
    cout << "That region's reported number of accidents was " << Cacc << "." << endl;
  }
  if (Wacc < Cacc && Wacc < Eacc && Wacc < Sacc && Wacc < Nacc) {
    cout << "The city's " << W << " region had the lowest number of reported accidents last year." << endl;
    cout << "That region's reported number of accidents was " << Wacc << "." << endl;
  }
  if (Eacc < Wacc && Eacc < Cacc && Eacc < Sacc && Eacc < Nacc) {
    cout << "The city's " << E << " region had the lowest number of reported accidents last year." << endl;
    cout << "That region's reported number of accidents was " << Eacc << "." << endl;
  }
  if (Sacc < Wacc && Sacc < Eacc && Sacc < Cacc && Sacc < Nacc) {
    cout << "The city's " << S << " region had the lowest number of reported accidents last year." << endl;
    cout << "That region's reported number of accidents was " << Sacc << "." << endl;
  }
  if (Nacc < Wacc && Nacc < Eacc && Nacc < Sacc && Nacc < Cacc) {
    cout << "The city's " << N << " region had the lowest number of reported accidents last year." << endl;
    cout << "That region's reported number of accidents was " << Nacc << "." << endl;
  }

    // To be completely honest for either program when I had it as an else statement 
    // it would keep executing even when one of the previous statements were true and while 
    // I have an idea why, I am not sure how to fix it so I made it an if statement
  if (Cacc == Wacc && Wacc == Eacc && Eacc == Sacc && Sacc == Nacc) {
    cout << "Each region had the same amount of reported accidents last year." << endl;
    cout << "The reported number of accidents for each region was " << Cacc << ".";
  }
}
