#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  while(s[0] != '0')
  {
    vector<long long int> ret;
    long long int cur = 1;
    for(int i = 0; i < s.size(); i++)
    {
      if(s[i] - '0' == 0)
        cur = 0;
      if(i && ((s[i - 1] == '2' && s[i] < '7') || s[i - 1] == '1'))
          cur += (i==1)?1: ret[i - 2];

      ret.push_back(cur);
    }
    cout << ret[s.size() - 1] << endl;
    cin >> s;
  }
  return 0;
}
