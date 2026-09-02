#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int n)
{
  map<int,int>mpp;
  for(int i=0;i<n;i++)
  {
    mpp[arr[i]]++;
  }
  for(auto it:mpp)
  {
    if(it.second>1)
    return false;
  }
  return true;
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
cout<<check(arr,n);

    return 0;
}