// 03/27/2022
#include <iostream>
using namespace std;

int main() {

int uN;

do {
// input validation loop
// im guessing i should leave it as normal for if it enters a non integer? because it just stops
cout << "Enter a positive integer value (No decimal numbers or fractions): ";
cin >> uN;
} while (uN < 0);


int one = 1, sum = 0;
while (one <= uN) {
  sum += one;
  ++one;

  
}

cout << endl;
cout << "The sum of the numbers from 1 to " << uN << " is " << sum << ".";
  
}
