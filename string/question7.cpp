#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
getline(cin,s);
int alphs=0;
int nums=0;
int spec=0;
for(int i=0;i<s.length();i++)
{
    if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
    {
        alphs++;
    }
    else if(s[i]>='0'&&s[i]<='9')
    {
        nums++;
    }
    else{
        spec++;
    }
}
cout<<" total alphabet "<<alphs<<endl;
cout<<" total numbers  "<<nums<<endl;
cout<<" total special character "<<spec<<endl;

    return 0;
}