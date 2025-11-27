#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
getline(cin,s);
string a;
for(int i=0;i<s.length();i++)
{
    if(s[i]==' ')
    {
        continue;
        
    }
    a=a+s[i];

}
cout<<a;

    return 0;
}