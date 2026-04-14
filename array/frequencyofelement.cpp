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
int a;
cin>>a;
int count=0;
for(int i=0;i<n;i++)
{
    if(a==arr[i])
    {
        count++;
    }
}
cout<<count;

    return 0;
}