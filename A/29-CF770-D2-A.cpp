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
    int n, k;
    cin >> n >> k;
    vector<char> v;
    for (int i = 0; i < k; i++)
    {
        v.push_back('a' + i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i % k];
    }

    return 0;
}