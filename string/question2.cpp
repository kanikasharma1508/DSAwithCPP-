#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int countv=0;
    int countc=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            countv++;
        }
        else{
            countc++;
        }

    }
    cout<<"vowel = "<<countv<<endl;
    cout<<"consonent = "<<countc<<endl;
    return 0;
}