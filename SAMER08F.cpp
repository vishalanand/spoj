#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
  long long int n;
  cin >> n;
  while(n)
  {
    cout << n * (n + 1) * (2 * n + 1) / 6 << endl;
    cin >> n;
  }
  return 0;
}
