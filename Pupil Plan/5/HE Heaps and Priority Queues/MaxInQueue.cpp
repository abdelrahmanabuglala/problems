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

void max_heapify(int Arr[], int i, int N)
{
    int left = 2 * i;      // left child
    int right = 2 * i + 1; // right child
    int largest = 0;
    if (left <= N and Arr[left] > Arr[i])
        largest = left;
    else
        largest = i;
    if (right <= N and Arr[right] > Arr[largest])
        largest = right;
    if (largest != i)
    {
        swap(Arr[i], Arr[largest]);
        max_heapify(Arr, largest, N);
    }
}
void build_maxheap(int Arr[], int N)
{
    for (int i = N / 2; i >= 1; i--)
    {
        max_heapify(Arr, i, N);
    }
}
int main()
{
    fl();
    int N, Arr[100001] = {}, q;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> Arr[i];
    }
    build_maxheap(Arr, N);
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x;
        if (x == 1)
        {
            cin >> y;
            Arr[N + 1] = y;
            N++;
        }
        else if (x == 2)
        {
            max_heapify(Arr, 1, N);
            cout << Arr[1] << endl;
        }
    }

    return 0;
}