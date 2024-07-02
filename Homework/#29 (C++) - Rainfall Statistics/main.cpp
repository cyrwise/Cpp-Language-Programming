// 04/24/2022
#include <iostream>
#include <iomanip>
using namespace std;


// *******************
// FUNCTION PROTOTYPES
// *******************

void total(double, double, double, double, double, double, double, double, double, double, double, double);

void average(double, double, double, double, double, double, double, double, double, double, double, double);

void largest1(double, double, double, double, double, double, double, double, double, double, double, double);

void smallest(double, double, double, double, double, double, double, double, double, double, double, double);

// *******************
// MAIN
// *******************


int main() 
{

  double rainf[12]; 

  // Sends to function which will find all 12 answers
  
  for (int i=0; i<12; i++)
  {

    cout << "Enter the rainfall (in inches) for month #" << (i+1) << ": ";
    cin >> rainf[i];

    
    while (rainf[i] < 0)
    {
      cout << "Error 666!~ Enter a positive value: ";
      cin >> rainf[i];
      
    }

      
  }

cout << endl;
  
total(rainf[0], rainf[1], rainf[2], rainf[3], rainf[4], rainf[5], rainf[6], rainf[7], rainf[8], rainf[9], rainf[10], rainf[11]);

average(rainf[0], rainf[1], rainf[2], rainf[3], rainf[4], rainf[5], rainf[6], rainf[7], rainf[8], rainf[9], rainf[10], rainf[11]);
  
largest1(rainf[0], rainf[1], rainf[2], rainf[3], rainf[4], rainf[5], rainf[6], rainf[7], rainf[8], rainf[9], rainf[10], rainf[11]);

smallest(rainf[0], rainf[1], rainf[2], rainf[3], rainf[4], rainf[5], rainf[6], rainf[7], rainf[8], rainf[9], rainf[10], rainf[11]);
  
return 0;
}




void total(double one, double two, double three, double four, double five, double six, double seven, double eight, double nine, double ten, double eleven, double twelve)
{
  double total;
  total = one+two+three+four+five+six+seven+eight+nine+ten+eleven+twelve;

  cout << "The total rainfall for the year is " << setprecision(2) << fixed << total << " inches." << endl;
  
}


void average(double one, double two, double three, double four, double five, double six, double seven, double eight, double nine, double ten, double eleven, double twelve)
{
  double total;
  total = (one+two+three+four+five+six+seven+eight+nine+ten+eleven+twelve) / 12;

  cout << "The average rainfall for the year is " << setprecision(2) << fixed << total << " inches." << endl;
  
}



void largest1(double one, double two, double three, double four, double five, double six, double seven, double eight, double nine, double ten, double eleven, double twelve)
{
  double array[12] = {one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve};
  int largest, pos;
  largest = array[0];
  
  for(int i=1; i<12; i++) 
  {
    if(array[i]>largest) 
    {
      largest = array[i];
      pos = i;
    }
  }
  cout << "The largest amount of rainfall was " << setprecision(2) << fixed << largest << " inches." << endl;
  
}


void smallest(double one, double two, double three, double four, double five, double six, double seven, double eight, double nine, double ten, double eleven, double twelve)
{
  double array[12] = {one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve};
  int smallest, pos;
  smallest = array[0];
  
  for(int i=1; i<12; i++) 
  {
    if(array[i]<smallest) 
    {
      smallest = array[i];
      pos = i;
    }
  }
  cout << "The smallest amount of rainfall was " << setprecision(2) << fixed << smallest << " inches." << endl;
  
}
