#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, d;
  cin >> a >> d;

  while(a || d)
  {
    vector<int> aP;
    vector<int> dP;
    int x;

    for(int i = 0; i < a; i ++)
    {
      cin >> x;
      aP.push_back(x);
    }

    for(int i = 0; i < d; i++)
    {
      cin >> x;
      dP.push_back(x);
    }
    sort(dP.begin(), dP.end());

    bool ret = false;
    for(int i = 0; i < a; i ++)
    {
      if(aP[i] < dP[1])
      {
        ret = true;
        break;
      }
    }
    if(ret)
    {
      cout << "Y" << endl;
    }
    else
    {
      cout << "N" << endl;
    }

    cin >> a >> d;
  }

  return 0;
}
