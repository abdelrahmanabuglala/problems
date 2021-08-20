#include <iostream>
using namespace std;
int main()
{
    int n, h, x = 0;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > h)
        {
            x += 2;
        }
        else
        {
            x++;
        }
    }
    cout << x;

    return 0;
}