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
    int result[n];
    for(int i=0;i<n;i++)
    {
        result[n-1-i]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
}