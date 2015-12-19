#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;

  int ret = 0;
  while(t --)
  {
    int x;
    cin >> x;

    ret ^= x;
  }

  cout << ret << endl;

  return 0;
}
