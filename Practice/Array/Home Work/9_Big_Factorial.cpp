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
  int arr[10001] = {0};
  arr[0] = 1;
  if (n == 0 || n == 1)
  {
    cout << "1";
  }
  else
  {
    for (int i = 2; i <= n; i++)
    {
      for (int j = 0; j < 10000; j++)
        arr[j] *= i;

      for (int j = 0; j < 10000; j++)
        if (arr[j] > 9)
        {
          int carry = arr[j] / 10;
          arr[j] = arr[j] % 10;
          arr[j + 1] += carry;
        }
    }
    string res = "";
    for (int i = 0; i < 10000; i++)
    {
      res = to_string(arr[i]) + res;
    }
    int x;
    for (int i = 0; i < 10000; i++)
    {
      if (res[i] != '0')
      {
        x = i;
        break;
      }
      
    }
    for (int i = x; i < res.size(); i++)
    {
      cout<<res[i];
    }
    
    
  }

  return 0;
}