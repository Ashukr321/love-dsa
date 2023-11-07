#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target)
{
  if (start <= end)
  {
    int mid = (start + end) / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] < target)
    {
      return binarySearch(arr, mid + 1, end, target);
    }
    else
    {
      return binarySearch(arr, start, mid - 1, target);
    }
  }
  return -1;
}

int main()
{
  int arr[] = {2, 34, 32, 4, 32, 4324, 2};
  int n =sizeof(arr)/sizeof(arr[0]); // Calculate the size of the array correctly
  int target = 4324;
  int start = 0;
  int end = n - 1;
  int indexOfElements = binarySearch(arr, start, end, target);
  if (indexOfElements == -1)
  {
    cout << "Element not found." << endl;
  }
  else
  {
    cout << "Element found at index: " << indexOfElements << endl;
  }
  return 0;
}
