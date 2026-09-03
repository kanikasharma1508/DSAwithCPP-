#include<bits/stdc++.h>
using namespace std;
int unique(int arr[],int n)
{
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        if(it.second==1)
        {
            return it.first;
        }
    }
    return -1;
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
cout<<unique(arr,n);


    return 0;
}