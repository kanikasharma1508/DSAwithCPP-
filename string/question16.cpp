#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
getline(cin,s);
string t;
getline(cin,t);
    sort(s.begin(),s.end());
 sort(t.begin(),t.end());
if(s==t)
{
    cout<<"anagram ";
}
else{
    cout<<" not a anagram ";
}
    return 0;
}