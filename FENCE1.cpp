#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  while(n)
  {
    double ret = n * n / (2 * M_PI);
    /*int val = 0;
    if(int(ret * 1000) / 10 >= 5)
      val ++;

    ret = int(ret * 100 + val) / 100.0;
    cout << ret << endl;*/
    double a = 1.3451;
    printf("%0.2f %0.20lf\n", a, a);
    printf("%0.2lf\n", ret);

    cin >> n;
  }

  return 0;
}
