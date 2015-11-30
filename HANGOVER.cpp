#include <bits/stdc++.h>
using namespace std;

int main()
{
  double n;
  cin >> n;
  while(n)
  {
    int i = 1;
    double ret = 0.0;
    while(ret < n)
      ret += 1.0 / (i++ + 1);
    cout << i - 1 << " card(s)" << endl;
    cin >> n;
  }
  return 0;
}
