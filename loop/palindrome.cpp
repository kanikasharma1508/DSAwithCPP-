#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int s=n;
int rev=0;
while (n!=0)
{
  int k=n%10;
  rev=rev*10+k;
  n=n/10;
}
if(s==rev)
{
    cout<<"palindrome";
}
else{
    cout<<"not-palindrome";
}

    return 0;
}