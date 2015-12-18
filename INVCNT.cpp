#include <bits/stdc++.h>
using namespace std;

long long int merge(vector<long long int> &num, long long int start, long long int mid, long long int end)
{
  long long int vec1 = start;
  long long int vec2 = mid + 1;

  vector<long long int> update;
  long long int ret = 0;

  while(vec1 <= mid && vec2 <= end)
  {
    if(num[vec1] <= num[vec2])
    {
      update.push_back(num[vec1 ++]);
    }
    else
    {
      update.push_back(num[vec2 ++]);
      ret += (mid - vec1 + 1);
    }
  }

  while(vec1 <= mid)
  {
    update.push_back(num[vec1 ++]);
  }

  while(vec2 <= end)
  {
    update.push_back(num[vec2 ++]);
  }

  for(long long int i = start; i <= end; i++)
  {
    num[i] = update[i - start];
  }

  return ret;
}

long long int mergeSort(vector<long long int> &num, long long int start, long long int end)
{
  if(start >= end)
    return 0;
  long long int a, b, c;
  long long int mid = (start + end) / 2;

  a = mergeSort(num, start, mid);
  b = mergeSort(num, mid + 1, end);
  c = merge(num, start, mid, end);

  return a + b + c;
}

int main()
{
  long long int t;
  cin >> t;

  while(t --)
  {
    long long int n, x;
    cin >> n;
    vector<long long int> num;

    for(long long int i = 0; i < n; i ++)
    {
      cin >> x;
      num.push_back(x);
    }

    cout << mergeSort(num, 0, num.size() - 1) << endl;
  }

  return 0;
}
