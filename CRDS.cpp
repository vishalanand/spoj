#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int t;
  cin >> t;

  while(t --)
  {
    long long int n, ret;
    cin >> n;

    ret = n * (3 * n + 1) / 2;
    ret %= 1000007;
    cout << ret << endl;
  }

  return 0;
}
