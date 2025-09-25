#include<bits/stdc++.h>
using namespace std;
int main()
{  
int n;
cin>>n;
int sum=0;
int o=n;
int p=n;
int count=0;
while(n!=0)
{
   n=n/10;
   count++;
}
while(o!=0)
{
    int k=o%10;
    sum=sum+(int)pow(k,count);
     o=o/10;

}
if(sum==p)
{
    cout<<"it is a armstrong number";
    
}
else{
    cout<<"it is not a armstrong number";

}

    return 0;
}