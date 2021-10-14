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
  int a, b;
  cin>>a>>b;
  for (int i = 0; i < 1000000; i++)
  {
    if (a <= b)
    {
        a *=3;
        b *= 2;
    }
    else{
      cout<<i;
      break;
    }
        
  }
  return 0;
}