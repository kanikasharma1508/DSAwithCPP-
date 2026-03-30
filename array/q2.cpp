#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr1[n];
for(int i=0;i<n;i++)
{
    cin>>arr1[i];
}
int a;
cin>>a;
int arr2[a];
for(int i=0;i<a;i++)
{
    cin>>arr2[i];
}
int size=n+a;
int result[size];
for(int i=0;i<n;i++)
{
    result[i]=arr1[i];
}
for(int i=0;i<n;i++)
{
    result[n+i]=arr2[i];
}

for(int i=0;i<size;i++)
{
    cout<<result[i]<<" ";
}
    return 0;

}