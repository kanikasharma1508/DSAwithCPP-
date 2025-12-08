#include<bits/stdc++.h>
using namespace std;
int main()
{
//print first not repeating character.
string s;
cin>>s;
map<char,int>mpp;
for(int i=0;i<s.length();i++)
{
    mpp[s[i]]++;
}

for(auto it:mpp)
{
   if(it.second==1)
   {
    cout<<it.first;
    break;
   } 
}



    return 0;
}