#include <bits/stdc++.h>
using namespace std;

int main()
{
  int m, n;
  cin >> m >> n;
  int x;

  while(m!=0 && n!=0)
  {
    vector<vector<int> > yeyenum(n, vector<int>(m, 0));
    vector<vector<int> > bloggium(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < m; j++)
      {
        cin >> yeyenum[i][j];
      }
    }

    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < m; j++)
      {
        cin >> bloggium[i][j];
      }
    }

    vector<vector<int> > dpY(n, vector<int>(m, 0));
    vector<vector<int> > dpB(n, vector<int>(m, 0));
    vector<vector<int> > dp(n, vector<int>(m, 0));

    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < m; j++)
      {
        dpB[i][j] = bloggium[i][j];
        if(i)
          dpB[i][j] += dpB[i - 1][j];

        dpY[i][j] = yeyenum[i][j];
        if(j)
          dpY[i][j] += dpY[i][j - 1];
      }
    }

    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < m; j++)
      {
        int t1 = dpY[i][j];
        int t2 = dpB[i][j];

        if(i)
          t1 += dp[i - 1][j];
        if(j)
          t2 += dp[i][j - 1];

        dp[i][j] = max(t1, t2);
      }
    }

    cout << dp[n - 1][m - 1] << endl;
    cin >> m >> n;
  }

  return 0;
}
