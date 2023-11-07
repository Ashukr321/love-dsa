#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
void insertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > temp)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
}

int main()
{
  // create array
  int arr[] = {
      12,
      4,
      324,
      32,
      234,
  };

  int n = sizeof(arr) / sizeof(int);
  cout << "before sorting" << endl;
  printArray(arr, n);

  cout << endl;
  cout << "after sorting" << endl;
  insertionSort(arr, n);
  printArray(arr, n);
  return 0;

}
