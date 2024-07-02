// 05/08/2022
#include <iomanip>
#include <iostream>
using namespace std;

// The aim of this program is to compare a charge account number given by the user to an array of 18 numbers, and either validate or invalidate it based on its match

int main() 
{

  // This will be our User input variable, may be good to add other variables to the top in the future for good practice
  int userCharge;

  // We ask for their charge account number which we will compare to our array of integers
  cout << "Enter a charge account number: ";
  cin >> userCharge;

  // The integer array
  int array[18] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002}; 

  // This is how we do a linear search, also known as a seqeuntial search. It starts at the first element and sequentially steps through an array, examining each element until it locates the value it is searching for

  //Algorithm:
  //set found to false; set position to –1; set index to 0
  //while index < number of elements and found is false
  //if list[index] is equal to search value
          //found = true
          //position = index
  //end if
  //add 1 to index
  //end while
  //return position

  // Making variables
  int index = 0, position = -1;
  bool found = false;

  // We want found to be false be default so it goes until we set it to true. If it is set to true it will still look through the other values since it keeps going until 18 AND found is true.
  while (index < 18 && !found)
  {

    // Its going to go through each value and match it to our user input until it reaches the end or finds a matching one
    if (array[index] == userCharge)
    {
      found = true;
      position = index;
    }

    index++;
    
  }

  // If it did find it and then set the boolean variable found to true, then it will display the following
  if (found == true)
  {
    cout << endl << "The number is valid.";
  }

  // If it did not after going through every value in the array, then it will display the following false message
  if (found == false)
  {
   cout << endl << "Error: The entered number is invalid";
  }
  
}
