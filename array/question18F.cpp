#include<bits/stdc++.h>
using namespace std;
bool ispresent(int arr[],int n,int a)
{ for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
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
int a;
cin>>a;
if(ispresent(arr,n,a)==true)
{
    cout<<"element present";
}
else{
    cout<<"element not present";
}


    return 0;
}