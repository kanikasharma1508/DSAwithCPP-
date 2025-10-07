#include<bits/stdc++.h>
using namespace std;
bool perfect(int n)
{int s=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        s=s+i;
    }
    if(s==n)
    return true;
    else{
        return false;
    }
}
int main()
{
int a;
cin>>a;
for(int i=1;i<=a;i++)
{
  
  if(perfect(i))
  cout<<i<<endl;
}

    return 0;
}
