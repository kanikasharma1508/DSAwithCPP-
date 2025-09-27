#include<bits/stdc++.h>
using namespace std;
bool fact(int a)
{ if(a%5==0)
    {
        return true;
    }
    else{
        return false;
    }
  
}
int main()
{
int a;
for(int i=1;i<=100;i++)
{
    if(fact(i))
    {
        cout<<i<<endl;
    }
}





    return 0;
}