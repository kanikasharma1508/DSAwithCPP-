#include<bits/stdc++.h>
using namespace std;
int missingnum(int arr[],int n)
{  int t=0;
    for(int i=0;i<n;i++)
    {
       t=t+arr[i];
    }
    int sum=(n*(n+1))/2;
    return sum-t;
  
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

cout<<missingnum(arr,n);

    return 0;
}