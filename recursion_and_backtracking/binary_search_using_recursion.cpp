#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> v, int start, int end, int target)
{
  while (start <= end)
  {
    // calculate mid
    int mid = start + (end - start) / 2;
    if (v[mid] == target)
    {
      return mid;
    }
    else if (v[mid] < target)
    {
      return binarySearch(v, mid + 1, end, target);
    }
    else
    {
      return binarySearch(v, start, end - 1, target);
    }
  }
  return -1;
}

int main()
{
  // create vector
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
  int start = 0;
  int end = v.size();
  int target = 9;
  cout << end;

  int elementIndex = binarySearch(v, start, end, target);

  if (elementIndex == -1)
  {
    cout << "element is not present" << endl;
  }
  else
  {
    cout << "element is preset at index of :" << elementIndex << endl;
  }

  return 0;
}