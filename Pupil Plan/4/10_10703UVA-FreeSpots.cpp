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
    int w, h, n;
    cin >> w >> h >> n;
    while (w > 0 || h > 0 || n > 0)
    {
        int x1, x2, y1, y2, count = 0, fspot;
        int A[505][505] = {};
        for (int k = 0; k < n; k++)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            if (x1 <= w && x2 <= w && y1 <= h && y2 <= h)
            {
                for (int i = min(x1, x2); i <= max(x1, x2); i++)
                {
                    for (int j = min(y1, y2); j <= max(y1, y2); j++)
                    {
                        A[i][j] = 1;
                    }
                }
            }
        }
        for (int i = 1; i <= w; i++)
        {
            for (int j = 1; j <= h; j++)
            {
                if (A[i][j] > 0)
                {
                    count++;
                }
            }
        }
        fspot = (w * h) - count;
        if (fspot == 0)
        {
            cout << "There is no empty spots." << endl;
        }
        else if (fspot == 1)
        {
            cout << "There is one empty spot." << endl;
        }
        else
        {
            cout << "There are " << fspot << " empty spots." << endl;
        }
        cin >> w >> h >> n;
    }

    return 0;
}