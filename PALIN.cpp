#include <bits/stdc++.h>
using namespace std;

bool palin(vector<int> &dig)
{
  int l = 0;
  int r = dig.size() - 1;
  while(l < r)
  {
    if(dig[l ++] != dig[r --])
      return false;
  }

  return true;
}

bool nines(vector<int> &dig)
{
  for(int i = 0; i < dig.size(); i++)
  {
    if(dig[i] != 9)
      return false;
  }

  return true;
}

void increment(vector<int> &dig)
{
  int cnt = dig.size();
  int l = (cnt % 2)? cnt / 2 + 1: cnt / 2;
  int r = (cnt % 2)? l: l + 1;
  int carry = 1;

  l --;
  r --;

  while(carry && l >= 0)
  {
    dig[l] += carry;
    carry = dig[l] / 10;
    dig[l] %= 10;
    dig[r ++] = dig[l --];
  }
}

void digPrint(vector<int> dig)
{
  for(int i = 0; i < dig.size(); i++)
    cout << dig[i];
}

int main()
{
  int t;
  cin >> t;

  while(t --)
  {
    string n;
    cin >> n;
    if(n.size() == 1 && n[0] < '9')
    {
      cout << n[0] - '0' + 1 << endl;
      continue;
    }

    vector<int> dig;
    for(int i = n.size() - 1; i >= 0; i --)
    {
      dig.push_back(n[i] - '0');
    }
    reverse(dig.begin(), dig.end());
    int cnt = dig.size();

    if(nines(dig))
    {
      cout << "1";
      for(int i = 0; i < dig.size() - 1; i++)
      {
        cout << "0";
      }
      cout << "1" << endl;
      continue;
    }

    if(palin(dig))
    {
      increment(dig);
    }
    else
    {
      int l = cnt / 2;
      int r = (cnt % 2)? l + 2: l + 1;
      l --;
      r --;
      bool flag = false;
      bool encounter = false;
      while(l >= 0)
      {
        if(dig[r] > dig[l] && !encounter)
        {
          flag = true;
        }
        if(dig[l] != dig[r])
        {
          encounter = true;
        }
        dig[r ++] = dig[l --];
      }
      
      if(flag)
      {
        increment(dig);
      }
    }

    digPrint(dig);
    if(t)
      cout << endl;
  }

  return 0;
}
