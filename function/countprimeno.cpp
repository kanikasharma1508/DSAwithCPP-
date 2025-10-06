#include<bits/stdc++.h>
using namespace std;
bool isprime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return false;
        }
       
    }
    return true;

}
int main()
{
int a;
cin>>a;
int c=0;
for(int i=2;i<=a;i++)
{ if(isprime(i))
    {
        c++;
    }
    
}
cout<<c;


    return 0;
}