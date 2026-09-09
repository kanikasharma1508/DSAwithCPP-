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
int arr1[n];
int ind=0;
for(int i=0;i<n;i++)
{
    if(arr[i]!=0)
    {
        arr1[ind]=arr[i];
        ind++;
    }
}
for(int i=ind;i<n;i++)
{
    arr1[i]=0;
}
for(int i=0;i<n;i++)
{
    cout<<arr1[i]<<" ";
}
    return 0;
}