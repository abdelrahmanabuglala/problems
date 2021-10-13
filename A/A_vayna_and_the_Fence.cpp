#include <iostream>
using namespace std;

void fl() {
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
//  freopen("ot.txt", "w", stdout);
#else
//  freopen("jumping.in", "r", stdin);  // HERE
#endif
}

int main()
{
    int n, h, y, x = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        if (y <= h)
        {
            x++;
        }
        else
        {
            x += 2;
        }
    }

    cout << x;

    return 0;
}