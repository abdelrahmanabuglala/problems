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
int Binary_Search(int x[], int n, int z)
{
  int start, end, mid;
  start = 0;
  end = n - 1;
  while (start <= end)
  {
    mid = (start + end) / 2;
    if (x[mid] == z)
    {
      return mid;
    }
    else if (x[mid] < z)
    {
      start = mid + 1;
    }
    else if (x[mid] > z)
    {
      end = mid - 1;
    }
  }
  return -1;
}
int main()
{
  fl();
  int x[10000], n, s;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }
  cin >> s;
  // First sol
  sort(x, x + n);
  for (int i = 0; i < n; i++)
  {
    int z = s - x[i];
    int a = Binary_Search(x, n, z);
    if (x[i] != x[a])
    {
      cout << x[i] << "&" << x[a] << "\n";
    }
  }
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = i; j < n; j++)
  //   {
  //     if (j != i)
  //     {
  //       if (s == (x[i] + x[j]))
  //       {
  //         cout << x[i] << "&" << x[j] << "\n";
  //       }
  //     }
  //   }
  // }

  return 0;
}
