#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int ret = 0;
  for(int i = 1; i <= sqrt(n); i++)
  {
    ret += (1 + (n - i*i) / i);
  }
  cout << ret << endl;
  return 0;
}
