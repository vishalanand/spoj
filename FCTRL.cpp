#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, n;
  cin >> t;
  while(t --)
  {
    cin >> n;
    int val = 5;
    int ret = 0;
    while(n >= val)
    {
      ret += n / val;
      val *= 5;
    }

    cout << ret << endl;
  }
  return 0;
}