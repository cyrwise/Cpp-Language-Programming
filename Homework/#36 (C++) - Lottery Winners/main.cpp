// 05/08/2022
#include <iomanip>
#include <iostream>
using namespace std;

int main() 
{

  int winnerTicket;
  
  cout << "Enter this week's winning number: ";
  cin >> winnerTicket;

  int array[10] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121}; 
  
  int index = 0, position = -1;
  bool found = false;

  while (index < 18 && !found)
  {

    if (array[index] == winnerTicket)
    {
      found = true;
      position = index;
    }

    index++;
    
  }
  
  if (found == true)
  {
    cout << endl << "You actually won for once!!! Nice going! One of these tickets is a winner this week (" << winnerTicket << ").";
  }
  if (found == false)
  {
   cout << endl << "You did not have a winning ticket this week. (Lol)";
  }
  

  
}
