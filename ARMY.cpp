#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  int n, m;
  while(t --)
  {
    int x;
    int cnt_g, cnt_m;
    vector<int> nm;
    vector<int> ng;

    cin >> n >> m;

    int nm_max = -1, ng_max = -1;
    for(int i = 0; i < n; i++)
    {
      cin >> x;
      ng_max = max(x, ng_max);
      ng.push_back(x);
    }

    for(int i = 0; i < n; i++)
    {
      if(ng[i] == ng_max)
      {
        cnt_g ++;
      }
    }

    for(int i = 0; i < m; i++)
    {
      cin >> x;
      nm_max = max(x, nm_max);
      nm.push_back(x);
    }

    for(int i = 0; i < m; i++)
    {
      if(nm[i] == nm_max)
      {
        cnt_m ++;
      }
    }
    if(ng_max >= nm_max)
    {
      cout << "Godzilla" << endl;
    }
    else
    {
      cout << "MechaGodzilla" << endl;
    }
  }
  return 0;
}
