#include <iostream>
using namespace std;

// print array
void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

// bubble sort
void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int flag = false;

    for (int j = 0; j < n - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        flag = true;
      }
    }
    if (!flag)
    {
      break;
    }
  }
}

int main()
{
  // create array
  int arr[] = {2, 3, 32, 432, 4, 132, 4};
  cout << "before sorting" << endl;
  printArray(arr, 7);
  // sorting using bubble sort algorithm
  bubbleSort(arr,7);
  cout<<"after sortring"<<endl;
  printArray(arr, 7);
  return 0;
}