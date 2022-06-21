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
  int arr[5] = {}, x = 0;
  string s;
  for (int i = 1; i <= 4; i++)
  {
    cin >> arr[i];
  }
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
    x += arr[s[i] - '0'];
  }
  cout << x;

  return 0;
}