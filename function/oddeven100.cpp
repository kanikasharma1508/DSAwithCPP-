#include<bits/stdc++.h>
using namespace std;
bool oddeven(int a)
{
    if(a%2==0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
  int a;
  for(int i=1;i<=100;i++)
  {
    if(oddeven(i))
    {
     cout<<i<<endl;
    }

  }

    return 0;
}