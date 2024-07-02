// 04/03/2022
// Programming Challenge 2
#include <iostream>
#include <iomanip>
using namespace std;
// Write the prototypes for the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength();
double getWidth();
double getArea(double length, double width);
double displayData(double length, double width, double area);


int main()
{
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}
//***************************************************
// You must write the getLength, getWidth, getArea, *
// and displayData functions.                       *
//***************************************************

double getLength()
{

  double l;
  cout << "Enter the length: ";
  cin >> l;
  return l;

}

double getWidth()
{

  double w;
  cout << "Enter the width: ";
  cin >> w;
  return w;

}

double getArea(double length, double width)
{

  double a;
  a = length*width;
  
  return a;

}

double displayData(double length, double width, double area)
{
  cout << endl;
  cout << "Rectangle Data" << endl;
  cout << "_______________" << endl;
  cout << setw(5) << "Length:" << setw(5) << length << endl;
  cout << setw(5) << "Width:" << setw(6) << width << endl;
  cout << setw(5) << "Area:" << setw(8) << area << endl;
  
  return;

}
