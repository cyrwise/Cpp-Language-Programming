// 05/01/2022
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  // I am making a constant to define the number of rows and collumns
  const int NUMROWS = 7, NUMCOL = 2;

  // This is the 2d array, more is said about it on my 5/1 birthdays page. 
  double t[NUMROWS][NUMCOL];


 // This is the same logic loop I used in order to get values entered for each collumn of each row, this program having 14 in total
  for (int row=0; row < NUMROWS; row++) {
      cout << "Enter the highest temperature for day " << (row+1) <<  ": ";
      cin >> t[row][0];

      cout << "Enter the lowest temperature for day " << (row+1) << ": ";
      cin >> t[row][1];

  }





  // adds a line break after in order to make code look more clean, important
  cout << endl;

  // This gets the average of the values for the high temperatures, which is the first collumn for each row
  double avghigh, avglow;
  double total = 0;
  for (int row = 0; row < NUMROWS; row++)
  {
    total += t[row][0];
  }
  avghigh = total / NUMROWS;

    // Displays the average which is calculated after the loop is finished adding all the values together, with the setprecision command that in this case sets it to one decimal point number, automatically rounding (I think)
  cout << "Average high temperature: " << setprecision(1) << fixed << avghigh << endl;






  
  // This gets the average of the values for the low temperatures, which is the second collumn for each row
  total = 0;
  for (int row = 0; row < NUMROWS; row++)
  {
    total += t[row][1];
  }
  avglow = total / NUMROWS;

  // Displays the average which is calculated after the loop is finished adding all the values together, with the setprecision command that in this case sets it to one decimal point number, automatically rounding (I think)
  cout << "Average low temperature: " << avglow << setprecision(1) << fixed << endl;

  
  


}
