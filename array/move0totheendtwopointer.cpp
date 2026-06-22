#include <iostream>
using namespace std;
int main() {
    
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int l = 0;
    int r = 1;
    
    while(r<n)
    {
        
        if(arr[l]!=0) l++;
        if(arr[l]==0 && arr[r]!=0){
            swap(arr[l],arr[r]);
            l++;
        }
        
        r++;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i] << " "; 
    }
    
    
    

    return 0;
}