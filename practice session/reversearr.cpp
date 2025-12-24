#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int revarr[n];
int ind=0;
for(int i=n-1;i>=0;i--)
{
    revarr[ind]=arr[i];
    ind++;
}
for(int i=0;i<n;i++)
{
    cout<<revarr[i]<<" ";
}
    return 0;
}