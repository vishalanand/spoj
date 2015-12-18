#include <bits/stdc++.h>
using namespace std;

int edist(string A, string B)
{
  vector<vector<int> > dp(A.size() + 1, vector<int> (B.size() + 1));
  for(int i = 0; i <= A.size(); i ++)
  {
    for(int j = 0; j <= B.size(); j ++)
    {
      if(!i)
        dp[i][j] = j;
      else if(!j)
        dp[i][j] = i;
      else
      {
        if(A[i - 1] == B[j - 1])
          dp[i][j] = dp[i - 1][j - 1];
        else
        {
          dp[i][j] = 1 + min(min(dp[i - 1][j - 1], dp[i - 1][j]), dp[i][j - 1]);
        }
      }
    }
  }

  return dp[A.size()][B.size()];
}

int edistN(string A, string B)
{
  vector<int> oldVec(B.size() + 1, 0);
  vector<int> newVec(B.size() + 1, 0);

  for(int i = 0; i <= A.size(); i ++)
  {
    for(int j = 0; j <= B.size(); j ++)
    {
      if(!i)
        newVec[j] = j;
      else if(!j)
        newVec[j] = i;
      else
      {
        if(A[i - 1] == B[j - 1])
          newVec[j] = oldVec[j - 1];
        else
        {
          newVec[j] = 1 + min(min(oldVec[j - 1], oldVec[j]), newVec[j - 1]);
        }
      }
    }

    for(int i = 0; i <= B.size(); i ++)
    {
      oldVec[i] = newVec[i];
    }
  }

  return newVec[B.size()];
}

int main()
{
  int t;
  cin >> t;

  string A, B;
  while(t --)
  {
    cin >> A >> B;
    cout << edistN(A, B) << endl;
  }

  return 0;
}
