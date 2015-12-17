#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int t;
  cin >> t;

  long long int x, y, z;
  while(t --)
  {
    cin >> x >> y >> z;
    long long int n = 2 * z / (x + y);
    long long int b = (y - x) / (n - 5);
    long long int a = x - 2 * b;

    cout << n << endl;
    for(int i = 0; i < n; i++)
    {
      cout << a + i * b << " ";
    }
    cout << endl;
  }
}
