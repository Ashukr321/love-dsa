#include <iostream>
using namespace std;
int power(int n)
{
  if (n == 0)
    return 1;
  return 2 * power(n - 1);
}
int main()
{
  int n;
  cout << "enter the power n" << endl;
  cin >> n;
  int ans = power(n);
  cout << ans << endl;
  return 0;
}