// #include <bits/stdc++.h>
// using namespace std;

// void fl()
// {
// #ifndef ONLINE_JUDGE
//     freopen("in.txt", "r", stdin);
// //   freopen("ot.txt", "w", stdout);
// #else
// //  freopen("jumping.in", "r", stdin);  // HERE
// #endif
// }

// int main()
// {
//     fl();
//     int n, m, x, y = 0, zero = 0, arra[101] = {}, arrb[101] = {};
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arra[i];
//         cin >> arrb[i];
//         if (arra[i] == 0)
//         {
//             zero++;
//         }
//     }
//     sort(arrb, arrb + zero, greater<int>());
//     x = arrb[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (x == m)
//         {
//             y++;
//         }

//         if (arra[i] <= x && arrb[i] > x)
//         {
//             x = arrb[i];
//         }
//         if (m <= x && m >= arra[i] && arra[i])
//         {
//             y++;
//         }
//     }
//     if (y > 0 && zero != 0)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }

//     return 0;
// }

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

bool compareOperation(pair<int, int> p2, pair<int, int> p1)
{
    if (p2.first != p1.first)
        return p2.first < p1.first; // asc
    else
    {
        if (p2.second != p1.second)
            return p2.second > p1.second; // desc
        else
            return 0;
    }
}

int main()
{
    fl();
    int n, m, x, y = 0, zero = 0;
    pair<int, int> arr[101];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        cin >> arr[i].second;
        zero += (arr[i].first == 0);
    }
    sort(arr, arr + n);
    x = arr[0].second;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].first <= x && arr[i].second > x)
        {
            x = arr[i].second;
        }
        if (m <= x && m >= arr[i].first && arr[i].first)
        {
            y++;
        }
        if (x == m)
        {
            y++;
        }
    }

    if (y > 0 and zero)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}