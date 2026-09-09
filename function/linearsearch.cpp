#include<bits/stdc++.h>
using namespace std;
bool find(int arr[],int n,int a)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
          return true;
        }
    }
    return false;
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
int a;
cin>>a;
cout<<find(arr,n,a);

    return 0;
}