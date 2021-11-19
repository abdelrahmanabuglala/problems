#include <bits/stdc++.h>
using namespace std;

int Binary_Search(int x[], int n, int z)
{
    int start, end, mid;
    start = 0;
    end = n - 1;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (x[mid] == z)
        {
            return mid;
        }
        else if (x[mid] < z)
        {
            start = mid + 1;
        }
        else if (x[mid] > z)
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int x[10000], n, z, y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    cin >> z;
    y = Binary_Search(x, n, z);

    if (y == -1)
        cout << "not exist";
    else
        cout << "exist";
}
