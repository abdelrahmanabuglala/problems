#include <iostream>
using namespace std;

void Sort2Arrays(int Sorted1[], int sz1, int Sorted2[], int sz2, int result[], int sz3)
{
    int idx1 = 0, idx2 = 0, res = 0;

    while (idx1 < sz1 && idx2 < sz2)
    {
        if (Sorted1[idx1] > Sorted2[idx2])
        {
            result[res] = Sorted2[idx2];
            res++, idx2++;
        }
        else
        {
            result[res] = Sorted1[idx1];
            res++, idx1++;
        }
    }
    while (idx2 < sz2)
    {
        result[res] = Sorted2[idx2];
        res++, idx2++;
    }

    while (idx1 < sz1)
    {
        result[res] = Sorted1[idx1];
        res++, idx1++;
    }
}

int main()
{
    int a[5] = {1, 10, 100, 1000, 1001}, b[3] = {2, 4, 150}, c[8];

    Sort2Arrays(a, 5, b, 3, c, 8);

    for (int i = 0; i < 8; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}