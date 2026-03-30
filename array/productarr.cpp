#include<bits/stdc++.h>
using namespace std;
int main()
{
//product of array except that number.
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int pro=1;
int result[n];
for(int i=0;i<n;i++)
{
    pro=pro*arr[i];
}
for(int i=0;i<n;i++)
{
    result[i]=pro/arr[i];
}
for(int i=0;i<n;i++)
{
    cout<<result[i]<<" ";
}
    return 0;
}