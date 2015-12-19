#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  for(int i = 1; i <= t; i ++)
  {
    double r;
    cin >> r;

    double ret = 4 * r * r + 0.25;
    //cout << "Case " << i << ": " << ret << endl;
    printf("Case %d: %.2lf\n", i, ret);
  }

  return 0;
}
