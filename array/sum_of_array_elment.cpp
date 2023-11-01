// print the sum of the array all   the elements
#include <iostream>
using namespace std;
int main()
{
  // create array
  int arr[] = {23, 33, 5, 4, 52, 45, 24,25,235123};
  int size = sizeof(arr) / sizeof(int);
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  cout << "the sum of the all array elements :" << sum << endl;

  return 0;
}

// array works on the zero  baed indexing  in the array 
// array store the elements in the contigous fassion in the memory 
// array name store the address of the base address 


// array and function 
// pass by value // in this we create the copy of the array 
// pass by reference  // in this  we directly mutate the original array 
// in the actual array is mutate 