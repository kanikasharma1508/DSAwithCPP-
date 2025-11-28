#include<bits/stdc++.h>
using namespace std;
int main()
{
// replace all digit with *.
string s;
getline(cin,s);
for(int i=0;i<s.length();i++)
{
    if(s[i]>='0'&&s[i]<='9')
    {
     s[i]='*';
    }
}
cout<<s;

    return 0;
}