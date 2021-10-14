#include <iostream>
#include <algorithm>
using namespace std;

void fl() {
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
    int n, a[101], i;
    cin>>n;
    for (i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    sort(a, a+n);
    
    for (i = 0; i < n; i++)
    {
      cout<<a[i]<<" ";
    }
    

    return 0;
}