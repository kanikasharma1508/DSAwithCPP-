#include<bits/stdc++.h>
using namespace std;
class manager{
public:
void print ()
{
    cout<<"complete all pending work today itself."<<endl;
}
};
class employee: public manager{
    public:
    void reply()
    {
        cout<<" ok.sir!!!....";
    }

};
int main()
{
//single-level inheritance
employee e1;
e1.print();
e1.reply();

    return 0;
}