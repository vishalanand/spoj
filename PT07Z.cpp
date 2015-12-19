#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<vector<int> > &adj, int start)
{
  queue<pair<int, int> > q;
  vector<bool> visited(adj.size(), false);

  q.push(make_pair(start, 0));
  visited[start] = true;

  int ret = 0;
  int retLevel = 0;
  int cnt = 0;
  while(!q.empty())
  {
    int cur = q.front().first;
    int level = q.front().second;
    cnt ++;
    q.pop();
    ret = cur;
    retLevel = level;
    
    for(int i = 0; i < adj[cur].size(); i ++)
    {
      if(!visited[adj[cur][i]])
      {
        visited[adj[cur][i]] = true;
        q.push(make_pair(adj[cur][i], level + 1));
      }
    }
  }

  //cout << ret << " " << retLevel << endl;
  vector<int> retBFS;
  retBFS.push_back(ret);
  retBFS.push_back(retLevel);
  return retBFS;
}

int main()
{
  int n;
  cin >> n;

  vector<vector<int> > adj(n + 1, vector<int>(0));
  int u, v;

  for(int i = 0; i < n - 1; i ++)
  {
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  cout << bfs(adj, bfs(adj, 1)[0])[1] << endl;

  return 0;
}
