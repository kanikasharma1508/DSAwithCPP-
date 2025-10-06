#include<bits/stdc++.h>
using namespace std;
bool isarmstrong(int n)
{
    int org=n;
    int org1=n;
    int org2=n;
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
     int sum=0;
    while (org1!=0)
    {
      int k=org1%10;
      sum=sum+pow(k,count);
      org1=org1/10; 

    }
    if(sum==org2)
    return true;
    else{
        return false;
    }

    
    
}
int main()
{
int a;
cin>>a;
for(int i=1;i<=a;i++)
{
    if(isarmstrong(i))
    {
        cout<<i<<endl;
    }
}



    return 0;
}