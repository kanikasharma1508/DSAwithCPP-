#include<bits/stdc++.h>
using namespace std;
int fact(int a)
{
    int f=1;
    for(int i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
 int a;
 cin>>a;
 int sum=0;
 int o=a;
 while(a!=0)
 {
    int k=a%10;
    int fac=fact(k);
    sum=sum+fac;
    a=a/10;
 }
 if(sum==o)
 {
    cout<<"strong number";
 }
 else{
    cout<<"not a strong number";
 }
    return 0;
}