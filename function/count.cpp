#include<bits/stdc++.h>
int countt(int arr[],int n,int k)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(k==arr[i])
        count++;
    }
    return count;
}
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
int k;
cin>>k;
cout<<countt(arr,n,k);

    return 0;
}