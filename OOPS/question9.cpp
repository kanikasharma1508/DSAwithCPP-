#include<bits/stdc++.h>
using namespace std;
class student{
public:
string name;
int age;
student(string s,int a)
{
    name=s;
    age=a;
}

};
int main()
{
student s1("kanika",22);
cout<<s1.name<<endl<<s1.age;


    return 0;
}