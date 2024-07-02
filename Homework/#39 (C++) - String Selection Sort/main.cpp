// 05/08/2022
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


void displayArray(string[], int, string);
void selectionSort( string[], int );
void swap(string &, string &);

//
//

int main()
{
  const int NUM_NAMES = 20;
  
  string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                             "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                             "Taylor, Terri", "Johnson, Jill", "Allison, Jeff",
                             "Looney, Joe", "Wolfe, Bill", "James, Jean",
                             "Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
                             "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
                             "Pike, Gordon", "Holland, Beth" };


  // I saw this way of formatting in a video
  displayArray( names, NUM_NAMES, "UNSORTED: \n------------------" );
  
  selectionSort( names, NUM_NAMES );

  displayArray( names, NUM_NAMES, "SORTED: \n------------------" );


     return 0;
}

//
//

void selectionSort( string array[], int SIZE )
{
  int minIndex;
  string minValue;

  for ( int startIndex = 0; startIndex < (SIZE - 1); startIndex++ ) // 0 - 18
  {
    // reason for difference I think is because things move immediately to their final position in the array
    minIndex = startIndex;
    minValue = array[startIndex];
    
    
    for ( int index = startIndex +1; index < SIZE; index++ ) // 1 - 19
    {
      if ( array[index] < minValue )
      {
        minValue = array[index];
        minIndex = index;

        
      }
    }
    // swap function shows how we swap these two values
    swap( array[minIndex], array[startIndex] );
  }

  
}

//
//

void swap(string &a, string &b)
{
  // need temporary value of this datatype
  string temp = a;
  a = b; 
  b = temp;
}

//
//

void displayArray(string array[], int SIZE, string prompt)
{
    cout << prompt << endl;
    for (int i = 0; i < SIZE; i++)
        cout << array[i] << endl;
    cout << endl;
}
