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
        int arr[55] = {};
        queue<int> q;
        for (int i = 1; i <= n; i++)
        {
            q.push(i);
        }
        int i = 0;
        while (q.size() > 1)
        {
            arr[i] = q.front();
            q.pop();
            q.push(q.front());
            q.pop();
            i++;
        }
        cout << "Discarded cards:";
        if (n > 1)
            cout << " ";
        for (int i = 0; i < n - 1; i++)
        {
            cout << arr[i];
            if (i < n - 2)
            {
                cout << ", ";
            }
        }
        cout << endl;
        cout << "Remaining card: " << q.front() << endl;
        cin >> n;
    }

    return 0;
}