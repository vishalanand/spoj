#include <bits/stdc++.h>
using namespace std;

//The problem statement does not check for the discontunuity in the tree (there are always n-1 edges)
int main()
{
  int n, m;
  map<int, bool> visited;

  cin >> n >> m;
  vector<vector<int> > adj(n + 1, vector<int>(0));

  vector<int> out;
  map<int, bool> inPoint;

  while(m --)
  {
    int u, v;
    cin >> u >> v;
    out.push_back(u);
    inPoint[v] = true;

    adj[u].push_back(v);
  }
  
  queue<int> dfs;
  map<int, bool> rootPoint;

  for(int i = 0; i < out.size(); i ++)
  {
    if(inPoint.find(out[i]) == inPoint.end() && rootPoint.find(out[i]) == rootPoint.end())
    {
      rootPoint[out[i]] = true;
      dfs.push(out[i]);
    }
  }

  int cnt = 0;
  while(!dfs.empty())
  {
    int cur = dfs.front();
    if(visited.find(cur) != visited.end())
    {
      break;
    }
    visited[cur] = true;
    cnt ++;
    dfs.pop();
    for(vector<int>::iterator it = adj[cur].begin(); it != adj[cur].end(); it ++)
    {
      dfs.push(*it);
    }
  }

  if(dfs.empty() && cnt == n)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}
