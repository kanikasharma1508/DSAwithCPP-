#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int isprime=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        isprime=1;

    }
if(isprime==1)
{
    cout<<"not prime";
}
else{
    cout<<"prime number";
}


    return 0;
}