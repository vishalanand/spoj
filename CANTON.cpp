#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while(t --)
  {
    int n;
    cin >> n;
    int i = sqrt(2 * n);
    if((i * (i + 1) / 2) < n)
    {
      i++;
    }
    int j = i * (i + 1) / 2 - n;
    if(i % 2)
    {
      cout << "TERM " << n << " IS " << j + 1 << "/" << i - j << endl;
    }
    else
    {
      cout << "TERM " << n << " IS " << i - j << "/" << j + 1 << endl;
    }
  }
  
  return 0;
}
