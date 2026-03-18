#include<bits/stdc++.h>
using namespace std;
int main()
{
    //sum of digit.
    int n;
    cin>>n;
    int sum=0;
    while(n!=0)
    {
      int k=n%10;
      sum=sum+k;
      n=n/10;
    }
    cout<<sum;
}