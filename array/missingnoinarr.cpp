#include<bits/stdc++.h>
using namespace std;
int missingnum(int n,int arr[])
{
    int totalsum=(n*(n+1))/2;
    int sum=0;
    for(int i=0;i<n;i++)
    {
      sum=sum+arr[i];
    }
    return totalsum-sum;
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
cout<<missingnum(n,arr);


    return 0;
}