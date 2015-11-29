#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  string expression;
  stack<char> ret;
  cin >> t;
  while(t --)
  {
    cin >> expression;
    for(int i = 0; i < expression.size(); i++)
    {
      if(expression[i] >= 'a' && expression[i] <= 'z')
      {
        cout << expression[i];
      }
      else if (expression[i] == '(')
      {
        ret.push('(');
      }
      else if(expression[i] == ')')
      {
        while(ret.top() != '(')
        {
          cout << ret.top();
          ret.pop();
        }
        ret.pop();
      }
      else
      {
        ret.push(expression[i]);
      }
    }
    cout << endl;
  }
  return 0;
}
