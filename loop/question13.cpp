#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int product=1;
while (n!=0)



{
    int k=n%10;
    n=n/10;
    product=product*k;
}
cout<<product;
    return 0;
}
