#include<bits/stdc++.h>
using namespace std;
class student{
    public:
string firstname;
string lastname;
void con()
{
    cout<<firstname+lastname;
}
};
int main()
{
//make a class named student 
//take two data member first name and lastname 
// make a functiont that conactenate firstname and lastname
//cout << firstname + lastname
//just make a object and call the function
  student s1;
  s1.firstname = "kanika ";
  s1.lastname = "sharma";
  s1.con();


    return 0;
}