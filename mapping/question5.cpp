#include<bits/stdc++.h>8
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
map<int,int>mpp;
for(int i=0;i<n;i++)
{
    mpp[arr[i]]++;
}
int max=0;

for(auto it:mpp)
{
    if(it.second>max)
    {
        max=it.second;
    }
}
cout<<max;

    return 0;
}