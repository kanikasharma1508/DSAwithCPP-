#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    student(string name,int rollno)
    {
        this->name=name;
        this->rollno=rollno;
    }

};
int main()
{
student s1("kanika",64);
cout<<s1.name<<endl<<s1.rollno;


    return 0;
}