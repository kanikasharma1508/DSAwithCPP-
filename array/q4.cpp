#include<bits/stdc++.h>
using namespace std;
int main()
{
// check duplication of array.
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
set<int>st;
for(int i=0;i<n;i++)
{
    st.insert(arr[i]);
}
if(st.size()!=n)
{
    cout<<"duplicate array is present";
}
else{
    cout<<"duplicate array is not present";
}
for(int i=0;i<st.size();i++)
{
    cout<<st.get(i);
}
    return 0;
}