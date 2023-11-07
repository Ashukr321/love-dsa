#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

// selection sort
void selectionSort(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    int min_idx = i; // now min update j
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min_idx])
      {
        min_idx = j;
      }
    }
    // we have to swap the element
    swap(arr[min_idx], arr[i]);
  }
}

int main()
{
  // create array
  int arr[] = {34, 13, 41, 34, 141, 413};
  int n = sizeof(arr) / sizeof(int);
  // print array
  printArray(arr, n);

  cout << "after selection sort" << endl;

  selectionSort(arr, n);

  printArray(arr, n);
  return 0;
}