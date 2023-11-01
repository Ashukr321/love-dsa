#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = sizeof(arr) / sizeof(int);
  int start = 0;
  int end = size - 1;
  cout << "Extreme Elements are: \n";

  while (start <= end)
  {
    
    cout << arr[start] << " ";
    if (start != end) { 
      cout << arr[end] << " ";
    }

    start++;

    end--;
  }

  return 0;
}
