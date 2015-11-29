#include <bits/stdc++.h>
using namespace std;

bool sieve[1000000002];
vector<int> prime;

void eratos(int lim)
{
  //cout << "lim = " << lim << endl;
  memset(sieve, true, sizeof(sieve));
  sieve[0] = sieve[1] = false;
  for(int i = 2; i <= sqrt(lim); i++)
  {
    if(sieve[i])
    {
      for(int j = i * i; j <= lim; j += i)
      {
        sieve[j] = false;
      }
    }
  }
  for(int i = 2; i <= lim; i++)
  {
    if(sieve[i])
      prime.push_back(i);
  }
  return;
}

int main()
{
  int t, m, n;
  
  cin >> t;
  eratos(sqrt(1000000001) + 1);
  //cout << "Sqrt (1000000001) = " << sqrt(1000000001) << endl;

  while(t --)
  {
    cin >> m >> n;
    m = (m == 1)? 2: m;
    for(int i = 0; i < prime.size(); i++)
    {
      //cout << prime[i] << endl;
      for(int j = (m / prime[i]) * prime[i]; j <= n; j += prime[i])
      {
        if(j <= prime[i])
          continue;
        sieve[j] = false;
      }
    }
    for(int i = m; i <= n; i++)
    {
      if(sieve[i])
        cout << i << endl;
    }
    cout << endl;
  }
  return 0;
}
