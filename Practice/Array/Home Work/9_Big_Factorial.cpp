#include <bits/stdc++.h>
using namespace std;

void fl()
{
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
//   freopen("ot.txt", "w", stdout);
#else
//  freopen("jumping.in", "r", stdin);  // HERE
#endif
}

int main()
{
  fl();
  int n;
  cin >> n;
  int arr[1001];
  arr[0] = 1;
  if (n == 0 || n == 1)
  {
    cout << "1";
  }
  else
  {
    for (int i = 2; i < n; i++)
    {
      for (int j = 0; j < 1000; j++)
      {
        arr[j] *= i;
        if (arr[j] > 9)
        {
          int carry = arr[j] / 10;
          arr[j] = arr[j] % 10;
          arr[j + 1] += carry;
        }
      }
    }
    string res = "";
    for (int i = 0; i < 1000; i++)
    {
      res = to_string(arr[i]) + res;
    }
    cout << res;
  }

  return 0;
}