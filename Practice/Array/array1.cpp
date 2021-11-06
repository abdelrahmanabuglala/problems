#include <iostream>
#include <algorithm>
#include <assert.h>
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
void Test_Array1()
{
    const int Size1 = 10, Size2 = 10, Size3 = Size1 + Size2;
    int arr1[Size1], arr2[Size2], MyAnswer[Size3], result[Size3];

    for (int test = 0; test < 1000; test++)
    {
        for (int i = 0; i < Size1; i++)
            arr1[i] = rand() % 100;
        for (int j = 0; j < Size2; j++)
            arr2[j] = rand() % 100;

        sort(arr1, arr1 + Size1);
        sort(arr2, arr2 + Size2);

        Sort2Arrays(arr1, Size1, arr2, Size2, MyAnswer, Size3);

        for (int i = 0; i < (Size3); i++)
        {
            if (i < Size1)
            {
                result[i] = arr1[i];
            }
            else
                result[i] = arr2[i - Size1];
        }
        sort(result, result + Size3);
        for (int i = 0; i < Size3; i++)
        {
            if (MyAnswer[i] != result[i])
            {
                cout << "Faild";
            }
        }
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
    Test_Array1();
    return 0;
}