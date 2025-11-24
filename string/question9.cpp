#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 
 getline(cin,s);
 string p=s;
 int start=0;
 int end=s.length()-1;
while(start<end)
{
    swap(s[start],s[end]);
    start++;
    end--;
}
if(p==s)
{
    cout<<"palindrome";
}
else{
    cout<<"not palindrome";
}
    return 0;
}