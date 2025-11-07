#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    { int min=i;
        for(int j=i+1;j<n;j++)
        {
           if(arr[j]<arr[min])
           {
            min=j;
           }
        }
        swap(arr[i],arr[min]);
    }
    
    
}
void print(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
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
    print(arr,n);
    cout<<endl;
    sort(arr,n);
   print(arr,n);
    return 0;
}