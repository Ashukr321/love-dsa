// extreem  printing
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main()
{
  // creating array
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = sizeof(arr) / sizeof(int);
  int start = 0;
  int end = size - 1;

  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }

  // print array
  for (int i = 0; i < size; ++i)
  {
    cout << arr[i] << " ";
  }
}