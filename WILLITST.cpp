#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n;
  cin >> n;
  if((long long int)(n&(n - 1))==0)
    cout << "TAK" << endl;
  else
    cout << "NIE" << endl;

  return 0;
}
