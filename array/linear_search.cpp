#include<iostream>
using namespace std;

int linearSearch(int arr[], int target, int size) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return i;
    }
  }
  
  return -1;
}

int main() {
  int arr[] = {3, 5, 23,3, 52, 35, 23, 32};
  int target = 32;

  int size = sizeof(arr) / sizeof(int);
  int indexElement = linearSearch(arr, target, size);
  if (indexElement == -1) {
    cout << "Element not found" << endl;
  } else {
    cout << "Element is present at index of: " << indexElement << endl;
  }
  return 0;
}
