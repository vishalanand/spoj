#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, x, y;
  cin >> t;
  while(t --)
  {
    cin >> x >> y;
    int sub = (y % 2)?1:0;
    //if(y % 2 == 0)
    {
      if(x == y)
      {
        cout << 2 * y - sub << endl;
      }
      else if(x == y + 2)
      {
        cout << 2 * y + 2 - sub << endl;
      }
      else
      {
        cout << "No Number" << endl;
      }
    }
    /*else
    {
      if(x == y)
      {
        cout << 2 * y - 1 << endl;
      }
      else if (x == y + 2)
      {
        cout << 2 * y + 1 << endl;
      }
      else
      {
        cout << "No Number" << endl;
      }
    }*/
  }
  return 0;
}
