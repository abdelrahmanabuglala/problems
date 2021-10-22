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

char ConvertToUpper(char a)
{
  if (a >= 'a' && a <= 'z')
  {
    a -= ('a' - 'A');
  }
  return a;
}
char ConvertToLower(char b)
{
  if (b >= 'A' && b <= 'Z')
  {
    b += ('a' - 'A');
  }
  return b;
}
int main()
{
  fl();
  string s;
  int UpperCount = 0, LowerCount = 0;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      LowerCount++;
    }
    else
    {
      UpperCount++;
    }
  }
  if (UpperCount > LowerCount)
  {
    for (int i = 0; i < s.size(); i++)
    {
      s[i] = ConvertToUpper(s[i]);
    }
  }
  else
  {
    for (int i = 0; i < s.size(); i++)
    {
      s[i] = ConvertToLower(s[i]);
    }
  }
  cout << s;

  return 0;
}