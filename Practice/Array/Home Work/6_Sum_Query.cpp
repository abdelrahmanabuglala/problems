#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int idx1, idx2;
    int y[1000] = {0};
    cin >> n;

    int x[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    y[0] = x[0];
    for (int i = 0; i < n - 1; i++)
    {
        y[i + 1] = y[i] + x[i + 1];
    }
    cin >> idx1 >> idx2;

    if (idx1 == 0)
    {
        cout << y[idx2];
    }
    else
    {
        cout << y[idx2] - y[idx1 - 1];
    }
}