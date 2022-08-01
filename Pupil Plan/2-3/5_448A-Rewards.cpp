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
    int n, arra[5] = {}, arrb[5] = {}, suma = 0, sumb = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> arra[i];
        suma += arra[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> arrb[i];
        sumb += arrb[i];
    }
    cin >> n;
    suma = ceil((suma + 0.0) / 5.0);
    sumb = ceil((sumb + 0.0) / 10.0);
    if ((n < 2 && suma > 0 && sumb > 0) || ((suma + sumb) > n))
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}