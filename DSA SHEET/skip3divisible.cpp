#include<bits/stdc++.h>
using namespace std;
int main()
{
int s=0;

for(int i=0;i<100;i++)
{
    
    if(i%3==0)
    {
        continue;
    }
    s=s+i;

}
    cout<<s<<endl;
    return 0;
}