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
cout<<isprime(a);


    return 0;
}