#include<bits/stdc++.h>
using namespace std;
class student{
public:
void print()
{
    cout<<"good morning teacher"<<endl;
}
};
class teacher: public student{
    public:
    void reply()
    {
      cout<<"good morning student"<<endl;
    }
};
class principal:public teacher{
public:
     void check()
     {
        cout<<" good morning to you all my dear student and teacher";
     }
};
int main()
{
principal harshit;
harshit.print();
harshit.reply();
harshit.check();

    return 0;
}