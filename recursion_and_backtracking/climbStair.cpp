#include <iostream>
using namespace std;
int climbStair(int n)
{
  // base case
  if (n == 0 || n == 1)
    return 1;

  int ans = climbStair(n - 1) + climbStair(n - 2);
  return ans;
}
// main method start here ....
int main()
{
  int n;
  cout << "enter the value of n" << endl;
  cin >> n;
  int ans = climbStair(n);
  cout << "Answer :" << ans << endl;
  return 0;
}