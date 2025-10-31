#include<bits/stdc++.h>
using namespace std;
int print(int arr[],int n,int target)
{ int s=0;
    int l=n-1;
    
    while(s<=l)
    { int m=(s+l)/2;
        if(arr[m]==target)
        {
            return m;
        }
        else if(arr[m]>target)
        {
            l=m-1;
        }
        else{
            s=m+1;
        }
        
    }
    return -1;


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
int target;
cin>>target;
int p=print(arr,n,target);
if(p==-1)
{
    cout<<"element not present in array";
}
else{
    cout<<"element present in the array at index of "<<p;
}

    return 0;
}