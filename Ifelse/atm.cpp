#include<bits/stdc++.h>
using namespace std;
int main()
{
/*ATM Cash Withdrawal
Input balance and amount to withdraw.
If amount ≤ balance:
If amount is a multiple of 100 → Print "Transaction Successful"
Else → Print "Enter amount in multiples of 100"
Else → Print "Insufficient Balance"*/
int n;
cin>>n;
int balance;
cin>>balance;
if(balance>=n)
{
    if(n %100==0)
    {
      cout<<"transaction sucessful";
    }
    else{
        cout<<"enter amount in multiple of 100";
    }

}
else{
    cout<<"insufficient balance";
}


return 0;
}
