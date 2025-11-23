#include<bits/stdc++.h>
using namespace std;
int main()
{
    // check total uppercase and lowercase.
string s;
getline(cin,s);
int uc=0;
int lc=0;
int extra=0;
for(int i=0;i<s.length();i++)
{
    if(s[i]>='A'&& s[i]<='Z')
    {
        uc++;
    }
    else if(s[i]>='a'&& s[i]<='z')
    {
        lc++;
    }
    else{
        extra ++;
    }
}
cout<<" total uppercase = "<<uc<<endl;
cout<<" total lowercase = "<<lc<<endl;
cout<<" total extra = "<<extra<<endl;

    return 0;
}