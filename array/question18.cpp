#include<bits/stdc++.h>
using namespace std;
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
int iscount=0;
for(int i=0;i<n;i++)
{if(arr[i]==a)
    {
        iscount++;
    }


}
if(iscount>=1)
{
    cout<<"element found";
}
else{
    cout<<"element not found";
}

    return 0;
}