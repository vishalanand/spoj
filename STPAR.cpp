#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  while(n)
  {
    int x;
    vector<int> cars;
    stack<int> order;
    for(int i = 0; i< n; i++)
    {
      cin >> x;
      cars.push_back(x);
    }

    int cur = 1;
    for(int i = 0; i < n; i ++)
    {
      if(cars[i] == cur)
      {
        cur ++;
      }
      else if(!order.empty() && order.top() == cur)
      {
        cur ++;
        i --;
        order.pop();
      }
      else
      {
        order.push(cars[i]);
      }
    }

    while(!order.empty())
    {
      if(cur == order.top())
      {
        order.pop();
        cur ++;
      }
      else
        break;
    }

    if(order.empty() && cur == n + 1)
      cout << "yes" << endl;
    else
      cout << "no" << endl;

    cin >> n;
  }

  return 0;
}
