#include <iostream>
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
  int n, cnt = 1;
  cin >> n;
  char arr[100000 + 1][2];
  for (int i = 0; i < n, cin >> arr[i]; i++)
    ;
  for (int i = 1; i < n ; i++)
  {
    if (arr[i][0] == arr[i - 1][1])
    {
      cnt++;
    }
  }
  cout<<cnt;

  return 0;
}