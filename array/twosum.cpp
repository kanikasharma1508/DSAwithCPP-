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
int sum;
cin>>sum;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(sum==(arr[i]+arr[j]))
        cout<<i<<" "<<j;
     
    }
       break;
}


    return 0;
}