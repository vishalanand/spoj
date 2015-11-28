#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, a, b;
  cin >> t;
  while(t --)
  {
    cin >> a >> b;
    int arev = 0;
    int brev = 0;
    while(a)
    {
      arev = arev*10 + a%10;
      a /= 10;
    }
    while(b)
    {
      brev = brev*10 + b%10;
      b /= 10;
    }
    int crev = arev + brev;
    int c = 0;
    while(crev)
    {
      c = c*10 + crev%10;
      crev /= 10;
    }
    cout << c << endl;
  }
  return 0;
}
