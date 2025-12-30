#include<bits/stdc++.h>
using namespace std;
class a{
protected:
void print(){
    cout<<" hello world";
}
};
class b:public a{
public:
void show()
{
    print();
}
};
int main()
{
b b1;
b1.show();
    return 0;
}