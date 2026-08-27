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
int s=0;
int l=n-1;
while(s<=l)
{
    swap(arr[s],arr[l]);
    s++;
    l--;
}
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}