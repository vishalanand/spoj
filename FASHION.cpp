#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, n;
  cin >> t;
  while(t --)
  {
    cin >> n;
    int a[11] = {0};
    int b[11] = {0};
    int x;
    for(int i = 0; i < n; i++)
    {
      cin >> x;
      a[x] ++;
    }

    for(int i = 0; i < n; i++)
    {
      cin >> x;
      b[x] ++;
    }

    int aIndex = 10;
    int bIndex = 10;
    int ret = 0;
    
    while(aIndex >= 0)
    {
      if(a[aIndex] < b[bIndex])
      {
        ret += a[aIndex] * aIndex * bIndex;
        b[bIndex] -= a[aIndex];
        //a[aIndex] = 0;
        aIndex --;
      }
      else
      {
        ret += b[bIndex] * aIndex * bIndex;
        a[aIndex] -= b[bIndex];
        //b[bIndex] = 0;
        bIndex --;
      }
    }
    cout << ret << endl;
  }
  return 0;
}
