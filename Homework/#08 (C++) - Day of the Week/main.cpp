// 3/13/2022
#include <iostream>
using namespace std;

int main() {

int uN;
  
cout << "Enter a number in the range of 1 through 7" << endl;
cin >> uN;

if (uN >=1 && uN <=7){
      if (uN == 1)
        cout << "Monday";
      if (uN == 2)
        cout << "Tuesday";
      if (uN == 3)
        cout << "Wednesday";
      if (uN == 4)
        cout << "Thursday";
      if (uN == 5)
        cout << "Friday";
      if (uN == 6)
        cout << "Saturday";
      if (uN == 7)
        cout << "Sunday";
}  else{
      cout << "Error: Invalid input. Please enter a number between 1 and 7.";
}


  
}
