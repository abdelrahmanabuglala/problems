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
    int arr[5];
    set<int> s;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        s.insert(arr[i]);
    }

    cout << (4 - s.size());
    return 0;
}