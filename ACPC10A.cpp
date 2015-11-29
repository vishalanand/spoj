#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  while(a || b || c)
  {
    if(a + c == 2 * b)
      cout << "AP " << c + (c - b) << endl;
    else
      cout << "GP " << c * (c / b) << endl;

    cin >> a >> b >> c;
  }
  return 0;
}