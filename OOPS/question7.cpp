#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int rollno;

    student(string s,int r)
    {
         name=s;
        rollno=r;
    }

};
int main()
{
student s1("kanika",01);
 cout<<s1.name<<endl<<s1.rollno;
    return 0;
}