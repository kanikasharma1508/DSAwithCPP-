#include<bits/stdc++.h>
using namespace std;
bool ispresent(int arr[],int n,int sum)
{

 for(int i=0;i<n;i++)
 {
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]+arr[j]==sum)
        {
            return true;
        }
    }
 }
 return false;
}
int main()
{ cout<<"enter the size of array";
    int n;
    cin>>n;
    cout<<"enter element in array";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<" enter target number";
int sum;
cin>>sum;
cout<<ispresent(arr,n,sum);

    return 0;
}