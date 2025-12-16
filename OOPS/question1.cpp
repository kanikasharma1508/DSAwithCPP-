#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int rollno;

};
int main()
{
student s1;
s1.name="kanika";
s1.rollno=1;
student s2;
s2.name="harshit";
s2.rollno=20;
cout<<"student 1 details "<<s1.name<<" "<<s1.rollno<<endl;
cout<<"student 2 details "<<s2.name<<" "<<s2.rollno;

    return 0;
}