// 05/01/2022
#include <iostream>
// Needed to use vector commands
#include <vector>
using namespace std;

int main()
{
    // We are making a vector here, which is shown by the vector<int> thing. After that its just like a regular array, its as well called in the same format. Here we are predermining the values of the vector. I think as well you can remove and add more at will with vectors.
    vector<int> v{ 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60 };
 
// Im not exactly sure if this program is asking the values to be randomized at first so I will assume not

  // Displaying elements from first to last, this is how we do it and then display it
  for (int val : v)
    cout << val << endl;
  
// line break to make it look good
  cout << endl;

// This in particular is organizing the values so that it displays it backwards, from last to first
  for(int i = v.size() - 1; i >= 0; i--)
  {
    cout<<v[i]<< endl;
  }
  
    return 0;
}
