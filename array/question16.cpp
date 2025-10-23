#include<bits/stdc++.h>
using namespace std;
int max(int arr[],int n)
{
    int pos=0;
    int neg=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
    }
    if(pos>neg)
    {
        return pos;
    }
    else{
        return neg;
    }
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
cout<<max(arr,n);

    return 0;
}