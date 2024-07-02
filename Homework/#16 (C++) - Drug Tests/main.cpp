// 03/27/2022
#include <iostream>
#include <iomanip>
#include <cstdlib> // needed for random
#include <ctime> // needed for time so different number each time
using namespace std;

int main() {

unsigned seed;
seed = time(0);
srand(seed);

  
for (int i = 1; i < 53; i++) {

  int num = rand()%30+1;
  cout << "Week " << i << ", Employee Number: " << num << endl << endl;
  

  
}
  
}
