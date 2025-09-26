#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b)
{
 int add=a+b;
 return add;
}
int sub(int a,int b)
{
    return (a-b);
}
int multi(int a,int b)
{
    return (a*b);
}
int dvd(int a, int b)
{
    return(a/b);
}
int mod(int a,int b)
{
    return (a%b);
}
int main()
{  
int a,b;
cin>>a>>b;
cout<<sum(a,b)<<endl;
cout<<sub(a,b)<<endl;
cout<<multi(a,b)<<endl;
cout<<dvd(a,b)<<endl;
cout<<mod(a,b)<<endl;


    return 0;
}