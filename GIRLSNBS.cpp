#include <bits/stdc++.h>
using namespace std;

int main()
{
  int b, g;

  cin >> b >> g;
  
  while(!(b == -1 && g == -1))
  {
    int x = max(b, g);
    int y = min(b, g);

    if(!y)
      cout << x << endl;
    else if(x % (y + 1) == 0)
    {
      cout << x / (y + 1) << endl;
    }
    else
    {
      cout << x / (y + 1) + 1 << endl;
    }

    cin >> b >> g;
  }

  return 0;
}
