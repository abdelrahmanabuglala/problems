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
    int n;
    cin >> n;
    while (n)
    {
        int arr[105][105], sum = 0;
        vector<int> c;
        vector<int> r;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> arr[i][j];
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                sum += arr[i][j];
            }
            if (sum % 2 != 0)
            {
                r.push_back(i);
            }
            sum = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                sum += arr[j][i];
            }
            if (sum % 2 != 0)
            {
                c.push_back(i);
            }
            sum = 0;
        }
        if (r.size() == 0 && c.size() == 0)
        {
            cout << "OK" << endl;
        }
        else if (r.size() == 1 && c.size() == 1)
        {
            printf("Change bit (%d,%d)\n", r.at(0), c.at(0));
        }
        else
        {
            cout << "Corrupt" << endl;
        }

        cin >> n;
    }

    return 0;
}