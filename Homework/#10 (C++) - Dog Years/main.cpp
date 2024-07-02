// 03/13/2022
#include <iostream>
using namespace std;

int main() {

int suzyAge, dogAge;

cout << "Hi Aunt Suzy! c:" << endl;
cout << "" << endl;
cout << "Enter your age: ";
cin >> suzyAge;

cout << "Enter the age of your dog: ";
cin >> dogAge;
cout << "" << endl;
  
dogAge = dogAge*7;
  
if (suzyAge > dogAge) {
      cout << "You are older than your dog, who is " << dogAge << " in dog years!";
}  else if (suzyAge < dogAge) {
      cout << "You are younger than your dog, who is " << dogAge << " in dog years!";
}  else {
      cout << "You are the same age as your dog in dog years!";
}


  
}
