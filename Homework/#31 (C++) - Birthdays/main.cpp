// 05/01/2022
#include <iostream>
using namespace std;

int main() {
  
  // This sets a changeable constant in the 2d array im using, in this case I am going to use 5 and 2
  const int NUMROWS = 5, NUMCOL = 2;

// This is the 2d array, defined by having two [][], being a row and collumn. There can be even more but it gets confusing after a while. To calculate how many total values are used, multiply the numbers. So example if theres 5 rows and 2 collumns, there are 10 total values that will be entered (2x5).
  string namesNBirthdays[NUMROWS][NUMCOL];


// This is where the magic happens, this is supposed to assign a value to each of those 10 values, it starts by row and then it makes values for the collumns as well. For example the rows is each of the 5 friends, and the collumns is the 2 values that is entered for each of the two friends. It can be swapped as well, but essentially this is the logic loop for it (at least for a simple one, I think a one with more values could need more but I think its fine if each one needs a value)
  for (int row=0; row < NUMROWS; row++) {
      cout << "Enter name of friend " << (row+1) <<  ": ";
      cin >> namesNBirthdays[row][0];

      cout << "Enter friend " << (row+1) << "'s birthday (use format Month/Day/Year): ";
      cin >> namesNBirthdays[row][1];

      cout << endl;
  }


  // Displaying the values outside of the loop after the values have been saved through user input. it starts from 0 though, so if i wanted
  // display the first result I would do [0] instead of [1]
  cout << endl;
  cout << namesNBirthdays[0][0] << "'s birthday is " << namesNBirthdays[0][1] << endl;
  cout << namesNBirthdays[1][0] << "'s birthday is " << namesNBirthdays[1][1] << endl;
  cout << namesNBirthdays[2][0] << "'s birthday is " << namesNBirthdays[2][1] << endl;
  cout << namesNBirthdays[3][0] << "'s birthday is " << namesNBirthdays[3][1] << endl;
  cout << namesNBirthdays[4][0] << "'s birthday is " << namesNBirthdays[4][1] << endl;

}
  



