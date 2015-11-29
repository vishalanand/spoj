#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int c;
  vector<int> candy;
  while(n != -1)
  {
    int total = 0;
    for(int i = 0; i < n; i++)
    {
      cin >> c;
      total += c;
      candy.push_back(c);
    }
    int avg = total / n;
    if(total % n)
    {
      cout << "-1" << endl;
    }
    else
    {
      int ret = 0;
      for(int i = 0; i < n; i++)
      {
        if(candy[i] > avg)
          ret += (candy[i] - avg);
      }
      cout << ret << endl;
    }
    cin >> n;
    candy.clear();
  }
  return 0;
}
