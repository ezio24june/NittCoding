// Minimum Steps to 1
// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;

int minToOne(int n){
    int dp[n];
    dp[1] = 0;
    for(int i=2;i<=n;i++){
        // min(f(n-1),f(n/2),f(n/3))+1
        int min1 = INT_MAX,min2 = INT_MAX,min3 = INT_MAX,min = INT_MAX ;
        
        if(i%2 == 0)
            min1 = dp[i/2]+1;
            
        if(i%3 == 0)
            min2 = dp[i/3]+1;
        //if(i%3 != 0 && i%2 != 0)
        min3 = dp[i-1]+1;
        
        if(min1<min2)
        min = min1;
        else
        min = min2;
        if(min3<min)
        min = min3;
        
        dp[i] = min;
    }
    return dp[n];
}

int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<minToOne(n)<<endl;
    }
    return 0;
}