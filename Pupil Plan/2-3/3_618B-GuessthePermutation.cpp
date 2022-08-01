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
    int n, arr[55][55] = {}, out[55] = {}, visit[55] = {};
    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visit[arr[i][j]]++;
            if (visit[arr[i][j]] > 1)
            {
                out[i] = arr[i][j];
            }
        }
        memset(visit, 0, sizeof(visit));
    }
    for (int i = 0; i < n; i++)
    {
        if (out[i] != 0)
        {
            v.push_back(out[i]);
        }
        else
        {
            v.push_back(0);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (out[i] == 0)
        {
            for (int j = 1; j <= n; j++)

            {
                auto x = find(v.begin(), v.end(), j);
                int a = *x;
                if (a <= 0 || a > n)
                {
                    out[i] = j;
                    v[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << out[i] << " ";
    }

    return 0;
}