// DP Series 2nd Question

#include <bits/stdc++.h>
using namespace std;

int steps(int n)
{
    vector<int> dp(n+1, 0);
    dp[0]=1;
    dp[1]=1;
    for(int i=2; i<=n; i++){
        dp[i]= dp[i-1]+dp[i-2];
    }
    return dp[n];    
}

int main()
{
    int n;
    cout << "Enter the total number of steps" << endl;
    cin >> n;
    cout << "The ways to reach top are: ";
    cout << steps(n) << endl;
    return 0;
}