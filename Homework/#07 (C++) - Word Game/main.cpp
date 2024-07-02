#include <iostream>
using namespace std;

int main() {

string answer, name, age, city, college, profession, animal, petname;

  cout << "Hi! Could you take some time to enter your information?" << endl;
  cin >> answer;
  cout << "Great! Lets begin." << endl;
  cout << "" << endl;

  cout << "Enter your name: ";
  cin >> name;

  cout << "Enter your age: ";
  cin >> age;
  
  cout << "Enter the name of a city: ";
  cin >> city;

  cout << "Enter the name of a college: ";
  cin >> college;

  cout << "Enter a profession: ";
  cin >> profession;

  cout << "Enter a type of animal: ";
  cin >> animal;

  cout << "Enter a pet name: ";
  cin >> petname;

  cout << "" << endl;
  cout << "" << endl;
  
  cout << "There once was a person named " << name << " who lived in " << city << ". At the age" << endl;
  cout << "of " << age << ", " << name << " went to college at " << college << ". " << name << " graduated and" << endl;
  cout << "went to work as a " << profession << ". Then, " << name << "adopted a(n) " << animal << endl;
  cout << "named " << petname << ". They both lived happily ever after!";
  
    
}
