#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    void show()
    {
        cout<<" A is a base-class"<<endl;
    }
};
class b: public a{
public:
void print()
{
    cout<<" B is a child class of A"<<endl;
}
};
class c :public b{
    public:
    void update()
    {
        cout<<" C is child of A & B"<<endl;
    }

};
int main()
{
// a a1;
// a1.show();
// b b1;
// b1.print();
c c1;
c1.update();
c1.show();
c1.print();

    return 0;
}