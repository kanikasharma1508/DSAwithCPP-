#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
map<char,int>mpp;
for(int i=0;i<s.length();i++)
{
    mpp[s[i]]++;
}
int min=INT_MAX;
int max=INT_MIN;

for(auto it:mpp)
{
    if(it.second<min)
    {
        min=it.second;
    }
    if(it.second>max)
    {
        max=it.second;
    }
}
cout<<max-min;




    return 0;

}