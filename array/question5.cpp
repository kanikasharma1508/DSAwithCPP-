#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        if(i%2==0)
        {
            cout<<arr[i]<<endl;
        }
    }
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<=n-1;i++)
{
    cin>>arr[i];
}
print(arr,n);


    return 0;
}