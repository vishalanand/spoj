#include <bits/stdc++.h>
#define LIM 1000002
using namespace std;

long long int dp(int n, long long int *save)
{
  if(n == 0)
    return 0;
  if(n < LIM)
  {
    if(save[n] == -1)
    {
      //int val = dp(n/2, save) + dp(n/3, save) + dp(n/4, save);
      long long int val = dp(n/2, save);
      val += dp(n/3, save);
      val += dp(n/4, save);
      save[n] = (val > n)? val: n;
    }
    return save[n];
  }
  else
  {
    long long int val = dp(n/2, save) + dp(n/3, save) + dp(n/4, save);
    return (val > n)? val: n;
  }
}

int main()
{
  int n;
  long long int save[LIM];
  memset(save, -1, sizeof(save));
  while(cin >> n)
  {
    cout << dp(n, save) << endl;
  }
  return 0;
}
