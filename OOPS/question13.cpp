#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    void print()
    {
        cout<<"merry christmas!!!....";
    }

};
class teacher:public student{

};
int main()
{
 teacher t1;
 t1.print();


    return 0;
}