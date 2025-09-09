#include<bits/stdc++.h>
using namespace std;
int main()
{
// Number Range Checker
// Input a number.
// If number ≥ 1 and ≤ 100:
// If number ≤ 50 → Print "Number lies between 1 and 50"
// Else → Print "Number lies between 51 and 100"
// Else → Print "Out of Range"

int n;
cin>>n;
if(n>=1&&n<=100)
{
    if(n<=50)
    {
        cout<<"number lies between 1 and 50";
    }
    else{
        cout<<"number lie between 51 and and 100";
    }
}
else{
    cout<<"out of range";
}

return 0;
}