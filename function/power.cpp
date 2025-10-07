#include<bits/stdc++.h>
using namespace std;
int poww(int a,int b)
{
    int p=1;
    for(int i=1;i<=b;i++)
    {  p=p*a;

    }
    return p;
}
int main()
{
int n,m;
cin>>n>>m;
cout<<poww(n,m);


    return 0;
}