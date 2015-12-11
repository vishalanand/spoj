#include <bits/stdc++.h>
using namespace std;

int conv(string s)
{
  //return stoi(s);
  return atoi(s.c_str());
}

int main()
{
  string str[3];
  string op;
  int t;
  cin >> t;
  while(t --)
  {
    cin >> str[0];
    cin >> op;
    cin >> str[1];
    cin >> op;
    cin >> str[2];
    int flag = -1;

    for(int i = 0; i < 3; i++)
    {
      for(int j = 0; j < str[i].size(); j++)
      {
        if(str[i][j] == 'm')
        {
          flag = i;
          break;
        }
      }
      if(flag != -1)
        break;
    }

    switch(flag)
    {
      case 0:
        cout << conv(str[2]) - conv(str[1]) << " + " << str[1] << " = " << str[2] << endl;
        break;
      case 1:
        cout << str[0] << " + " << conv(str[2]) - conv(str[0]) << " = " << str[2] << endl;
        break;
      case 2:
        cout << str[0] << " + " << str[1] << " = " << conv(str[0]) + conv(str[1]) << endl;
        break;
    }
  }

  return 0;
}
