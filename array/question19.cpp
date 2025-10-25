#include<bits/stdc++.h>
using namespace std;
int print(int arr[],int n,int a)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            count++;
        }
    }
    return count;
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
cout<<print(arr,n,a);
    return 0;
}