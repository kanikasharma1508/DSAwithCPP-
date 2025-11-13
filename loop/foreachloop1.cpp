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
for(int val:arr)
{
    s=s+val;
}
cout<<s;

    return 0;
}