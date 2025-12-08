#include<bits/stdc++.h>
using namespace std;
int main()
{
    //find character in a string.
string s;
getline(cin,s);
char ch;
cin>>ch;
int isfound=0;
for(int i=0;i<s.length();i++)
{
    if(s[i]==ch)
    {
        isfound++;
    }
   
}
if(isfound>0)
{
    cout<<ch<<" is present";
}
else{
    cout<<ch<<" is not present";
}
    return 0;
}