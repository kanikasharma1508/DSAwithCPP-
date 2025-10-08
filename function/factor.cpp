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
    int sum(int s)
    {   int ss=0;
        for(int i=2;i<s;i++)
        {
            if(s%i==0)
            ss=ss+i;
        }
        return ss;
    }

int main()
{
int n;
cin>>n;
fac(n);
cout<<sum(n);


    return 0;
}