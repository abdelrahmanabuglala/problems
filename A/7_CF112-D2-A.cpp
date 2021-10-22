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
char convertToUpper(char a)
{
  if ('a' <= a && a <= 'z')
  {
    a -= ('a' - 'A');
  }
  return a;
}
int main()
{
  fl();
  string a, b;

  cin >> a >> b;

  for (int i = 0; i < a.size(); i++)
  {
    a[i] = convertToUpper(a[i]);
    b[i] = convertToUpper(b[i]);
  }
  cout << ((a > b) ? 1 : (b > a) ? -1
                                 : 0);

  return 0;
}