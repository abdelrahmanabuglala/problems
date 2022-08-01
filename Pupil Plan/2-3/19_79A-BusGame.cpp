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
    int x, y;
    cin >> x >> y;
    while (1)
    {
        if (((x * 100) + (y * 10)) < 220 || y < 2)
        {
            cout << "Hanako";

            break;
        }
        else
        {
            if (x >= 2)
            {
                x -= 2;
                y -= 2;
            }
            else if (x == 1)
            {
                x--;
                y -= 12;
            }
            else
            {
                y -= 22;
            }
        }
        if (((x * 100) + (y * 10)) < 220 || y < 2)
        {
            cout << "Ciel";

            break;
        }
        else
        {
            if (y >= 22)
            {
                y -= 22;
            }
            else if (y >= 12)
            {
                y -= 12;
                x--;
            }
            else
            {
                y -= 2;
                x -= 2;
            }
        }
    }

    return 0;
}