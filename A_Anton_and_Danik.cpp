#include <iostream>
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
  int n;
  string s;
  int Counter_A = 0, Counter_D = 0;
  cin>>n>>s;

  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'A')
    {
      Counter_A++;
    }
    else if (s[i] == 'D')
    {
      Counter_D++;
    }
    
  }
  if (Counter_A > Counter_D)
  {
    cout<<"Anton";

  }
  else if (Counter_A < Counter_D)
  {
    cout<<"Danik";
  }
  else{
    cout<<"Friendship";
  
  }
  

  return 0;
}