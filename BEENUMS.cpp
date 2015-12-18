#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  while(n != -1)
  {
    int level = sqrt((n - 1) / 3);
    if(1 + level * (level + 1) * 3 == n)
      cout << "Y" << endl;
    else
      cout << "N" << endl;

    cin >> n;
  }

  return 0;
}
