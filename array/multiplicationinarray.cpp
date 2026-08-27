#include<bits/stdc++.h>
using namespace std;
int main()
{
    //multiplication of array
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]*k<<" ";
    }

    return 0;
}