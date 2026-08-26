#include<bits/stdc++.h>
using namespace std;
int main()
{
// sum of the array.
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int s=0;
for(int i=0;i<n;i++)
{
    s=s+arr[i];
}
cout<<s;

    return 0;
}