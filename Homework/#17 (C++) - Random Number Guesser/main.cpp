#include <iostream>
#include <cstdlib> // needed for random
#include <ctime> // needed for time so different number each time
using namespace std;
int main() {

  int num, guess, tries = 0;
	srand(time(0)); //seed rand number generator
	num = rand() % 100 + 1; // rand number between 1 and 100



  cout << "I am thinking of a number between 1 and 100." << endl;
    cout << "Can you guess what it is? Enter your guess. ";

  int cp;
  cp = 0;
  while (cp != 1) {
  
    cin >> guess;
    tries++;

    if (guess > num){
      cout << guess << " is too high. Try a smaller number. ";
    } else if (guess < num) {
      cout << guess << " is too low. Try a larger number. ";
      } else {
      cout << "" << endl;
      cout << "Congratulations. You got it. My number was " << num << endl;
  }    
  
  }

}
