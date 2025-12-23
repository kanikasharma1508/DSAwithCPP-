#include<bits/stdc++.h>
using namespace std;
class student{
string name;
public:
void set(string n)
{
    name=n;
}
void print()
{
    cout<<name;
}
};
int main()
{
student s1;
s1.set("kanika");
s1.print();
    return 0;
}