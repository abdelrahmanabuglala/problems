#include <iostream>
#include <stack>
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
  string s;
  cin >> n >> s;
  stack<string> magnets;
  magnets.push(s);

  for (int i = 1; i < n; i++)
  {
    cin >> s;
    if (magnets.top() == s)
    {
      continue;
    }
    else
    {
      magnets.push(s);
    }
  }
  cout << magnets.size();
  return 0;
}