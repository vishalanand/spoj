#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  for(int unit = 1; unit <= t; unit ++)
  {
    int cnt, n;
    cin >> cnt >> n;

    int x;
    vector<int> ar;
    for(int i = 0; i < n; i ++)
    {
      cin >> x;
      ar.push_back(x);
    }

    sort(ar.begin(), ar.end());

    int ret = 0;
    for(int i = n - 1; i >= 0; i --)
    {
      cnt -= ar[i];
      ret ++;
      if(cnt <= 0)
        break;
    }

    cout << "Scenario #" << unit << ":" << endl;
    if(cnt <= 0)
    {
      cout << ret << endl;
    }
    else
    {
      cout << "impossible" << endl;
    }
    cout << endl;
  }

  return 0;
}
