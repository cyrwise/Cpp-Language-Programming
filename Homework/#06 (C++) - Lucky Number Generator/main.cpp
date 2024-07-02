#include <iostream>
#include <cstdlib> // needed for random
#include <ctime> // needed for time so different number each time
using namespace std;

int main() {

  
unsigned seed;
seed = time(0);
srand(seed);

int luckyNumber = rand() % 99 + 1;
  
cout << luckyNumber;

// To be completely honest I am not sure why lines 10-12 make this work, im putting things i got from the textbook together. I will look into it.

  
}
