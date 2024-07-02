// 03/27/2022
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  int user1, user2;
  
  cout << "Please enter an integer: ";
  cin >> user1;

  cout << endl;
  cout << "Please enter another integer: ";
  cin >> user2;
  cout << endl;


  if (user1 - user2 == 1 || user1 - user2 == -1) {
    
    cout << "There are no integers that exist between the two values." << endl;
  }






  
  if (user1 > user2){
    for (int i = user2 + 1; i < user1; i++) {
      
      cout << i << endl;
      }

    }  else if (user2 > user1){
    for (int i = user1 + 1; i < user2; i++) {
      
      cout << i << endl;
      }



    } else {

      cout << "There are no integers that exist between the two values." << endl;
    
    }




    }
