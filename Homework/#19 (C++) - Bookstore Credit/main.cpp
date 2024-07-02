// 04/03/2022
#include <iostream>
#include <iomanip>
using namespace std;


double calcCredit(string name, double gpa)
{
  double sum;
  sum = gpa * 100;

  cout << name << ", your GPA is " << setprecision(2) << fixed << gpa << ", so your credit is $" << setprecision(2) << fixed << sum << "." << endl;

  return sum;
  
}


int main() 
{

  string name;
  float gpa;
  double result;

  cout << "Enter your first name: ";
  cin >> name;

  cout << "Enter your GPA: ";
  cin >> gpa;

  while (gpa < 0){

    cout << "Error 666~! Shasta college does not allow people with a negative GPA to live. If you've entered an incorrect GPA, please re-enter your GPA: ";
    cin >> gpa;
    
  }

    

  result = calcCredit(name, gpa);


  
}
