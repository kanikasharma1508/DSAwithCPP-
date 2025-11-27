#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    map<char,int>mpp;
for(int i=0;i<s.length();i++)
{
    mpp[s[i]]++;
}
int max=0;
char ch;
for(auto it:mpp)
{
  if(it.second>max)
  {
    max=it.second;
    ch=it.first;
  }  
}
cout<<ch<<" "<<max;
    return 0;
}