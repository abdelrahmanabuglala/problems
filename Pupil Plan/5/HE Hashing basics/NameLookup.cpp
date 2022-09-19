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
    int n, roll, q, idx;
    string name, arr[100005] = {};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> roll >> name;
        arr[roll] = name;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> idx;
        cout << arr[idx] << endl;
    }

    return 0;
}