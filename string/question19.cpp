#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        string emp="";
        for(int j=i;j<n;j++)
        {
            emp=emp+s[j];
            cout<<emp<<endl;
        }
           
    }



    return 0;
}