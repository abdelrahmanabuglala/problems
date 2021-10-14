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
  int x;
  {

  for (int i = 0; i < 5; i++)

    for (int j = 0; j < 5; j++)
    {
      cin >> x;
      if (x == 1)
      {
        cout << (abs(i - 2)) + (abs(j - 2)) << endl;
        break;
      }
    }
  }
  return 0;
}