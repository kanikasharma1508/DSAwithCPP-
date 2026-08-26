#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int s=0;
    while(n!=0)
    {
        int k=n%10;
        s=s+k;
        n=n/10;

    }
    return s;
}
int main()
{
int n;
cin>>n;
cout<<sum(n);

    return 0;
}