#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while(t --)
  {
    int h, w, x;
    cin >> h >> w;
    vector<vector<int> > tiles(h, vector<int>(w));
    vector<vector<int> > dp(2, vector<int>(w, 0));
    
    for(int i = 0; i < h; i ++)
    {
      for(int j = 0; j < w; j ++)
      {
        cin >> tiles[i][j];
        if(!i)
          dp[0][j] = tiles[i][j];
        else
        {
          int addVal = dp[0][j];
          if(j)
            addVal = max(addVal, dp[0][j - 1]);
          if(j < w - 1)
            addVal = max(addVal, dp[0][j + 1]);

          dp[1][j] = tiles[i][j] + addVal;
        }
      }

      for(int j = 0; i && j < w; j ++)
        dp[0][j] = dp[1][j];
    }

    int ret = 0;
    for(int i = 0; i < w; i ++)
    {
      ret = max(ret, dp[0][i]);
    }

    cout << ret << endl;
  }

  return 0;
}
