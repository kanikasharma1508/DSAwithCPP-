#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> nums;
nums.push_back(5);
nums.push_back(10);
nums.push_back(15);
nums.push_back(20);
nums.push_back(25);
nums.push_back(30);
cout<<" the size of vector is "<<nums.size()<<endl;
for(int i=0;i<nums.size();i++)
{
    cout<<nums[i]<<" ";
}

nums.pop_back();
cout<<endl<<"after using pop_back function";
for(int i=0;i<nums.size();i++)
{
    cout<<nums[i]<<" ";
}
cout<<endl<<" size of a vector is after pop_back "<<nums.size();

    return 0;
}