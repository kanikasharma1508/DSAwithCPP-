#include<bits/stdc++.h>
using namespace std;
int missing(int arr[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    int sn=n*(n+1)/2;
    return sn-s;

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
cout<<missing(arr,n);


    return 0;
}