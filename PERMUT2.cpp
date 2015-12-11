#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while(n)
  {
    int x;
    vector<int> ar;
    for(int i = 0; i < n; i ++)
    {
      cin >> x;
      ar.push_back(x);
    }

    bool flag = true;
    for(int i = 0; i < n; i ++)
    {
      if(i != ar[ar[i] - 1] - 1)
      {
        flag = false;
        break;
      }
    }

    if(flag)
    {
      cout << "ambiguous" << endl;
    }
    else
    {
      cout << "not ambiguous" << endl;
    }

    cin >> n;
  }

  return 0;
}
