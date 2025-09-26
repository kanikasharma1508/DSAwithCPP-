#include<bits/stdc++.h>
using namespace std;
int main()
{  
int n;
cin>>n;
int original=n;
int s=n;
int sum=0;
int count=0;
while(n!=0)
{
    n=n/10;
    count++;
}
while(s!=0)
{
    int k=s%10;
    sum=sum+pow(k,count);
    s=s/10;
}
if(sum==original)
{
    cout<<"armstrong";
}
else{
    cout<<"not a armstrong";
}


    return 0;
}