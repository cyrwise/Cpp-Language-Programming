// 03/13/2022
#include <iostream>
using namespace std;

int main() {

float uMon;

cout << "Please enter the amount of money you spent at Best Buy: ";
cin >> uMon;

if (uMon >= 1000){
    cout << "Congratulations! This earns you 250 points!";
}  else if (uMon >= 500){
    cout << "This earns you 100 points!";
}  else if (uMon >= 250){
    cout << "This earns you 35 points!";
}  else if (uMon >= 100){
    cout << "This earns you 10 points!";
}  else if (uMon >= 50){
    cout << "This earns you 5 points!";
}  else if (uMon < 50 && uMon >= 0){
    cout << "This earns you 0 points.";
}  else if (uMon < 0){
    cout << "Pay your debt or we will send an ultra-armored Geeksquad tank to your residence to collect in either money or organs. You have been warned." << endl;
    cout << "- Ceo of Best Buy";
}  else {
    cout << "Error: Please enter a real number.";
}

// I found out through Stack overflow from a friendly user named Edleepony that when you enter a string it gets defaulted to 0 in a case like this. It was a very fascinating exchange, so I took it out by adding the last else if statement.
  
}
