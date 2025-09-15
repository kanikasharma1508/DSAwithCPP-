#include<bits/stdc++.h>
using namespace std;
int main()
{

    //college there are girls and boys
//lets some unique regno
//unique regno count of no digits  odd - girls and even - boys
int n;
cin>>n;
int count=0;
while (n!=0)
{
    n=n/10;
    count++;
    
}
if(count%2==0)
    {
        cout<<"boys";
    }
    else{
        cout<<"girls";
    }


    return 0;
}