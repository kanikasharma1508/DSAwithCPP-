#include<bits/stdc++.h>
using namespace std;
int main()
{
//count number of digit in given number.
int n;
cin>>n;
int original=n;
int count=0;
while(n!=0)
{
     n=n/10;//12
     count++;

}
cout<<count;

    return 0;
}