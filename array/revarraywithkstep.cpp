#include<bits/stdc++.h>
using namespace std;
int rev(int arr[],int n,int s,int e)
{
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int k;
cin>>k;
rev(arr,n,n-k,n-1);
rev(arr,n,0,n-k-1);
rev(arr,n,0,n-1);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
    return 0;
}