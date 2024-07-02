// 03/27/2022
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  int uN, cp;

  cout << "Enter the number of days you worked this month: ";

  cin >> uN;
  cp = 0;
  while(cp !=1) {
    if(uN >= 1 && uN <= 31) {
      cp = 1;
}    else {
      cout << "Invalid input, please enter an integer between 1 and 31: " << endl;
      cin >> uN;
}
} 


  cout << endl;
  cout << "Day" << setw(7) << "Pay" << endl;
  cout << "____________" << endl;


  
  float sum = 0.00, pP = 0.01;

  
  for (int i = 1; i < (uN+1); i++)
{
    
    sum += pP;
    cout << setw(2) << i << setw(6) << "$";
    cout << pP << endl;
    pP = pP * 2;
} 
    
cout << endl;
cout << "____________" << endl;

cout << setprecision(20) << "Total $: " << sum;

  
}
