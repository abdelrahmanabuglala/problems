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
    int y, x = 0;
    cin >> y;
    set<int> set1;
    while (set1.size() < 4)
    {
        set1.clear();
        y++;
        x = y;

        for (int i = 0; i < 4; i++)
        {
            set1.insert(x % 10);
            x = x / 10;
        }
    }
    cout << y;

    return 0;
}