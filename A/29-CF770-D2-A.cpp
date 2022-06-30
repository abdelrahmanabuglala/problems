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
    bool a = true;
    cin >> n >> k;
    char arr[n];
    char letters[] = "abcdefghijklmnopqrstuvwxyz";
generate:
    for (int i = 0; i < n; i++)
    {
        arr[i] = letters[rand() % 26];
    }
    set<int> s1;
    for (int i = 0; i < n; i++)
    {
        s1.insert(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (s1.size() != k || arr[i] == arr[i + 1])
        {
            a = false;
        }
    }
    if (a == false)
    {
        goto generate;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
    }

    return 0;
}