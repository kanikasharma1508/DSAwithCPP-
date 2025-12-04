#include<bits/stdc++.h>
using namespace std;
bool ispalindrom(string s)
{
    string ori=s;
    int start=0;
    int end=s.length()-1;
    while(start<=end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
    if(ori==s)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
string s;
cin>>s;
int count=0;
int n=s.length();
for(int i=0;i<n;i++)
{
    string emp="";
    for(int j=i;j<n;j++)
    {
        emp=emp+s[j];
         if(ispalindrom(emp))count++;
    }
   
}
cout<<count;

    return 0;
}