#include <iostream>
using namespace std;
int main() {

float bill, tax, tip, bFinal;

cout << "Enter the bill subtotal: ";
cin >> bill;

tax = bill * 0.075;
tip = bill * 0.20;

bFinal = (bill+tip+tax);

cout << "Meal charge: " << bill << endl;
cout << "Tax: " << tax << endl;
cout << "Tip: " << tip << endl;
cout << "Total bill: " << bFinal << endl;
cout << "Thank you for visiting." << endl << "We hope to see you again!";
}
