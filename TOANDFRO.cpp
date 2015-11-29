#include <bits/stdc++.h>
using namespace std;

int main()
{
  int w;
  string s;
  cin >> w;
  while(w)
  {
    cin >> s;
    string ret;
    for(int i = 0; i < w; i++)
    {
      for(int j = 0; j < s.size() / w; j++)
      {
        if(j % 2 == 0)
        {
          ret.push_back(s[j * w + i]);
        }
        else
        {
          ret.push_back(s[(j + 1) * w - i - 1]);
        }
      }
    }
    cout << ret << endl;
    cin >> w;
  }
  return 0;
}