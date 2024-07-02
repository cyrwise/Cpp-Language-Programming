// 05/08/2022
#include <iomanip>
#include <iostream>
using namespace std;


int binarySearch(const int [], int, int);

void selectionSort(int[], int);


const int SIZE = 18;


int main() 
{
  
  int userCharge,
         results;

  cout << "Enter a charge account number: ";
  cin >> userCharge;

  int numbers[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002}; 
  

  selectionSort(numbers, SIZE);

  results = binarySearch(numbers, SIZE, userCharge);
  
  if (results == -1)
  {
    cout << endl << "Error: The entered number is invalid";
  }
  else
  {
    cout << endl << "The number is valid.";
  }
  

  
}


void selectionSort(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    int smallest = array[i];
    int smallestIndex = i;

    for (int j = i; j < size; j++)
    {
      if (array[j] < smallest)
      {
        smallest = array[j];
        smallestIndex = j;
      }
    }
  
    int temp = array[i];
    array[i] = array[smallestIndex];
    array[smallestIndex] = temp;
    
  }

  
}


int binarySearch(const int array[], int size, int value)
{
  int first = 0,            // First array element
      last = size - 1,      // Last array element
      middle,               // Mid point of search (look above for notes)
      position = -1;        // Position of search value
  bool found = false;       // Flag

  while (first <= last && !found)
  {
    middle = (first + last) / 2;    // Calculate the mid point
    if (array[middle] == value)     // If value is found at mid
    {
      found = true;
      position = middle;
    }
    else if (array[middle] > value) // If value is in lower half
      last = middle - 1;
    else
      first = middle +1;            // If value is in upper half

    
  }
  return position;

}
