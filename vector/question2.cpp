#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums;
    nums.push_back(8);
    nums.push_back(9);
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(0);
    nums.push_back(5);
    nums.push_back(4);
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}