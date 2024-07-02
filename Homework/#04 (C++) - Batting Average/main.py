#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  

float atBat, hits; // I know I cannot put these both as ints since the answer wont be right, but it feels odd that they could enter a decimal for any of these

  cout << "Find your batting average!" << endl;
  cout << "" << endl;
  cout << "Enter the number of times at bat: ";
  cin >> atBat;
  cout << "Enter the number of hits: ";
  cin >> hits;
  cout << "" << endl;
  
  float avg = hits/atBat;
  
  cout << "Batting Average: ";
  cout << fixed << setprecision(3) << avg << endl;
}
