#include <iostream>
using namespace std;


int main() {

int eggsBuy, dozen, remainder;

  cout << "Enter the number of eggs you would like to buy: " << endl;
  cin >> eggsBuy;

  cout << "" << endl;

  dozen = eggsBuy / 12;
  remainder = eggsBuy % 12;

  float dozen2, remainder2, total;
    dozen2 = dozen * 3.25;
    remainder2 = remainder * 0.45;
    total = remainder2 + dozen2;

  
  cout << "You ordered " << eggsBuy << " eggs. That's " << dozen << " dozen at $3.25 each and " << remainder << endl;
  cout << "individual eggs at $.45 each, for a total of $" << total << "." << endl;


    
}
