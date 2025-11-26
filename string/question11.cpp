#include<bits/stdc++.h>
using namespace std;
int main()
{
// find frequency of element in string.
string s;
getline(cin,s);
map<char,int>mpp;
for(int i=0;i<s.length();i++)
{
    mpp[s[i]]++;
}
for(auto it:mpp)
{
    cout<<it.first<<"  "<<it.second<<endl;
}



    return 0;
}