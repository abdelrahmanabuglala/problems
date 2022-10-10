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

void read_map(map<string, string> &mp)
{
    char line[105];
    scanf("%s", line);
    int i = 1;
    while (line[i] != '\0' && line[i] != '}')
    {
        string key;
        while (line[i] != ':')
        {
            key += line[i];
            i++;
        }
        i++;
        string val;
        while (line[i] != ',' && line[i] != '}')
        {
            val += line[i];
            i++;
        }
        mp[key] = val;
        i++;
    }
}

void print_diff(map<string, string> &mp1, map<string, string> &mp2)
{
    int count = 0, total;
    for (auto item : mp2)
    {
        if (mp1.count(item.first) == 0)
        {
            if (count)
            {
                printf(",");
            }
            else
            {
                printf("+");
            }
            printf("%s", item.first.c_str());
            count++;
        }
    }
    if (count)
    {
        printf("\n");
    }
    total = count;
    count = 0;
    for (auto item : mp1)
    {
        if (mp2.count(item.first) == 0)
        {
            if (count)
            {
                printf(",");
            }
            else
            {
                printf("-");
            }
            printf("%s", item.first.c_str());
            count++;
        }
    }
    if (count)
    {
        printf("\n");
    }
    total += count;
    count = 0;
    for (auto item : mp2)
    {
        if (mp1.count(item.first) != 0 && mp1[item.first] != mp2[item.first])
        {
            if (count)
            {
                printf(",");
            }
            else
            {
                printf("*");
            }
            printf("%s", item.first.c_str());
            count++;
        }
    }
    if (count)
    {
        cout << "\n";
    }
    total += count;
    if (!total)
    {
        cout << "No changes\n";
    }
    cout << "\n";
}
int main()
{
    fl();
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        map<string,string> mp1;
        map<string,string> mp2;
        read_map(mp1);
        read_map(mp2);
        print_diff(mp1,mp2);
    }
    

    return 0;
}