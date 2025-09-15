#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int k=n%10;
while(n>=10)
{
    n=n/10;

}
cout<<"first digit is"<<n<<endl<<" last digit is "<<k;
    return 0;
}