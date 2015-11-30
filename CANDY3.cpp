#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, n;
  cin >> t;
  while(t --)
  {
    long long int x;
    long long int total = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
      cin >> x;
      total += (x % n);
      total %= n;
    }
    if(total)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  return 0;
}
