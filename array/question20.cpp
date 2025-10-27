#include<bits/stdc++.h>
using namespace std;
int find(int arr[],int n)
{ int count=0;
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
        else{
            count=0;
        }
        if(count>max)
        {
            max=count;
        }
    }
    return max;
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
    cout<<find(arr,n);
    
    return 0;
}