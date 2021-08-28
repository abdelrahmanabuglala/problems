#include <iostream>
using namespace std;
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