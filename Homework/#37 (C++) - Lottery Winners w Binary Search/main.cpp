// 05/08/2022
#include <iomanip>
#include <iostream>
using namespace std;


int binarySearch(const int [], int, int);
const int SIZE = 10;

int main() 
{
  // Program does the same thing except its modified to do a binary search instead, which is much more efficient and faster and stuff, however it requires the array elements to be sorted so we will have to sort these real quick (in this program its not a problem however because we are matching the new user value to an existing value, in any order, also its already sorted but if it werent one could use a sorting mechanism)
  
  int lotteryTickets[SIZE] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121}; 

  int winnerTicket;
  int results;
  
  cout << "Enter this week's winning number: ";
  cin >> winnerTicket;

  results = binarySearch(lotteryTickets, SIZE, winnerTicket);
  
  if (results == -1)
    cout << endl << "You did not have a winning ticket this week. (Lol)";
  else
  {
    cout << endl << "You actually won for once!!! Nice going! One of these tickets is a winner this week (" << winnerTicket << ").";
  }
  
  return 0;
  
}


int binarySearch(const int array[], int size, int value)
{
  int first = 0,            // First array element
      last = size - 1,      // Last array element
      middle,               // Mid point of search (look above for notes)
      position = -1;        // Position of search value
  bool found = false;       // Flag

  while (first <= last && !found)
  {
    middle = (first + last) / 2;    // Calculate the mid point
    if (array[middle] == value)     // If value is found at mid
    {
      found = true;
      position = middle;
    }
    else if (array[middle] > value) // If value is in lower half
      last = middle - 1;
    else
      first = middle +1;            // If value is in upper half

    
  }
  return position;

}
