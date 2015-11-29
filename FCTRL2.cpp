#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, n;
  cin >> t;
  while(t --)
  {
    int ret[1000] = {1};
    int cnt = 0;
    int carry = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
      for(int j = 0; j <= cnt; j++)
      {
        ret[j] = ret[j] * i + carry;
        carry = ret[j]/10;
        ret[j] %= 10;
      }
      while(carry)
      {
        cnt++;
        ret[cnt] = carry % 10;
        carry /= 10;
      }
    }

    for(int i = cnt; i >= 0; i--)
    {
      cout << ret[i];
    }
    cout << endl;
  }
  return 0;
}
