#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n;
  while(cin >> n)
  {
    vector<long long int> in(n, 0);
    for(long long int i = 0; i < n; i++)
    {
      cin >> in[i];
    }

    vector<vector<long long int> > dp(n, vector<long long int>(n, LONG_MAX));
    for(long long int i = 0; i < n; i++)
      dp[i][i] = 0;

    vector<long long int> summ(n, 0);
    summ[0] = in[0];
    for(long long int i = 1; i < n; i++)
      summ[i] = (in[i] + summ[i - 1]);

    //for(long long int i = 0; i < n; i++)
    for(long long int i = n - 1; i >= 0; i--)
    {
      for(long long int j = i + 1; j < n; j++)
      {
        for(long long int k = i; k < j; k++)
        {
          dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] 
                      + (
                        ((summ[k] - summ[i] + in[i])% 100) 
                        * ((summ[j] - summ[k + 1] + in[k + 1])% 100)
                        ));
        }
      }
    }

    cout << dp[0][n - 1] << endl;
  }

  return 0;
}
