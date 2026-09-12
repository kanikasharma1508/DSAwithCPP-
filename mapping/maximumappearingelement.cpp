#include<bits/stdc++.h>
using namespace std;
int maxx(int arr[],int n)
{   int fre=0;
int ele=0;

    map<int,int>mpp;
  for(int i=0;i<n;i++)
  {
    mpp[arr[i]]++;
  }
  for(auto it: mpp)
  {
    if(it.second>fre)
    { fre=it.second;
        ele=it.first;

    }
  }
  return ele;
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
cout<<maxx(arr,n);
    return 0;
}