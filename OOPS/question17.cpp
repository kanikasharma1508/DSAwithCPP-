#include<bits/stdc++.h>
using namespace std;
class a{
public:
void india()
{
    cout<<"india is my country"<<endl;
}
};
class b{
public:
void pakistan()
{
    cout<<"hania amir"<<endl;
}
};
class c:public a,public b{
public:
void combine()
{
 cout<<" diljit + hania";
}
};
int main()
{
c c1;
c1.india();
c1.pakistan();
c1.combine();


    return 0;
}