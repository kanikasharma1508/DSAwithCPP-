#include<bits/stdc++.h>
using namespace std;
int max(int arr[],int n)
{int m=arr[0];
    for(int i=0;i<n;i++)
    {
        if(m<arr[i])
        {
            m=arr[i];
        }
    }
    return m;

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