#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int ret = 0;
  set<int> s;
  while(n != 1)
  {
    if(s.find(n) == s.end())
    {
      s.insert(n);
    }
    else
    {
      ret = -1;
      break;
    }
    int m = n;
    int newVal = 0;
    while(m)
    {
      newVal += ((m % 10) * (m % 10));
      m /= 10;
    }
    n = newVal;
    ret ++;
  }

  cout << ret << endl;

  return 0;
}
