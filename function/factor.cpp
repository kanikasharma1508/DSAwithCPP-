#include<bits/stdc++.h>
using namespace std;
void fac(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        cout<<i<<endl;
    }
}
int main()
{
int n;
cin>>n;
fac(n);


    return 0;
}