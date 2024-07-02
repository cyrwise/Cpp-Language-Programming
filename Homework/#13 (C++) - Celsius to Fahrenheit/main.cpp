// 03/27/2022
#include <iostream>
#include <iomanip>
using namespace std;

int main() {


// I dont think I did the challenge unfortunately

cout << "Temperature Conversion Table";
cout << endl << endl;

cout << setw(5) << "Celsius" << setw(15) << "Fahrenheit" << endl;
cout << "____________________" << endl;
  

double f = 0, count = 0;  
for (count = 0; count <= 30; count++)
{ 
  f = 1.8*count + 32;
  
cout << setw(5) << count << setw(15) << setprecision(3) << f << endl;

}

}
