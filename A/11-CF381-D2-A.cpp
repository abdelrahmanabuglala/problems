#include <bits/stdc++.h>
using namespace std;

void fl() {
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
//   freopen("ot.txt", "w", stdout);
#else
//  freopen("jumping.in", "r", stdin);  // HERE
#endif
}

int main() {
  fl();
  int n, dima = 0, sereja = 0;
  int arr [1001];
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  int left =0;
  int right=n-1;
  bool s_turn=true;
  while (left<=right)
  {
    if (s_turn == true)
    {
        if (arr[left]>arr[right])
        {
            sereja+=arr[left];
            left+=1;
        }
        else{
            sereja+=arr[right];
            right-=1;
        }
        
    }
    else{
        if (arr[left]>arr[right])
        {
            dima+=arr[left];
            left+=1;
        }
        else{
            dima+=arr[right];
            right-=1;
        }
    }
    s_turn =!s_turn;
    
  }
  cout<<sereja<<" "<<dima;
  
  
  return 0;
}