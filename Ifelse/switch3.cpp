#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
char ch;
cin>>ch;
switch(ch)
{
    case '+':
    cout<<a+b;
    break;
    case '-':
    cout<<a-b;
    break;
    case '*':
    cout<<a*b;
    break;
    case '/':
    cout<<a/b;
    break;
    default:
    cout<<"invalid operation";
}


    return 0;
}