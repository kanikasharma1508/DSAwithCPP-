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
vector<int>v;
for(int i=0;i<n;i++)
{
    if(arr[i]!=0)
    v.push_back(arr[i]);
}
int rem=n-v.size();
for(int i=1;i<=rem;i++)
{
    v.push_back(0);
}
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
    return 0;
}