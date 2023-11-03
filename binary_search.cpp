#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target)
{
  if (start <= end)
  {
    int mid = start + (end - start) / 2; // Calculate the middle index to avoid potential integer overflow.
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] > target)
    {
      return binarySearch(arr, start, mid - 1, target); // Search the left subarray.
    }
    else
    {
      return binarySearch(arr, mid + 1, end, target); // Search the right subarray.
    }
  }
  return -1; // Target not found in the array.
}

int main()
{
  int arr[] = {2, 3, 4, 3, 23, 3, 23, 4, 7};
  int size = sizeof(arr) / sizeof(int);
  int target =7;
  int start = 0;
  int end = size - 1;
  int targetElementAtIndex = binarySearch(arr, start, end, target);

  if (targetElementAtIndex == -1)
  {
    cout << "Element not found in the array." << endl;
  }
  else
  {
    cout << "Element is present at index: " << targetElementAtIndex << endl;
  }

  return 0;
}
