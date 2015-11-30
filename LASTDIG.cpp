#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, a, b;
  cin >> t;
  while(t --)
  {
    cin >> a >> b;
    a %= 10;
    int arrC[10] = {1, 1, 4, 4, 2, 1, 1, 4, 4, 2};
    int arr[10][10] = {
              {0},
              {1},
              {2, 4, 8, 6},
              {3, 9, 7, 1},
              {4, 6},
              {5},
              {6},
              {7, 9, 3, 1},
              {8, 4, 2, 6},
              {9, 1},
              };
    int ret;
    if(a == 0)
      ret = 0;
    else if(b == 0)
      ret = 1;
    else
    {
      if(a == 1 || a == 5 || a == 6)
        ret = a;
      else
        ret = arr[a][(b % arrC[a] == 0)? arrC[a] - 1: (b % arrC[a]) - 1];
    }
    cout << ret << endl;
  }
  return 0;
}
