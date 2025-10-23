#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n)
{
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<even<<endl<<odd;
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
    return 0;
}