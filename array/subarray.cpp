#include<bits/stdc++.h>
using namespace std;
bool isfind(int n,int arr[],int k)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=0;
        for(int j=i;j<n;j++)
        {
            s=s+arr[j];
            if(s==k)
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
int k;
cin>>k;
cout<<isfind(n,arr,k);


    return 0;
}