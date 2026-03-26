#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
int size=2*n;
int result[size];
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
for(int i=0;i<n;i++)
{
    result[i]=arr[i];
}
for(int i=0;i<n;i++)
{
    result[n+i]=arr[i];
}
for(int i=0;i<size;i++)
{
    cout<<result[i]<<" ";
}
    return 0;
}