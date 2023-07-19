#include <bits/stdc++.h> 
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<bool>> dp(n, vector<bool>(k + 1, false));
    for (int i = 0; i < n; i++) {
        dp[i][0] = true;
    }
    dp[0][arr[0]] = true;
    for (int index = 0; index < n; index++) {
        for (int target = 0; target <= k; target++) {
            if (index > 0) {
                bool notTake = dp[index - 1][target];
                bool take = false;
                if (arr[index] <= target) {
                    take = dp[index - 1][target - arr[index]];
                }
                dp[index][target] = take || notTake;
            }
        }
    }
    return dp[n - 1][k];
}

//Space Complexity

#include <vector>

bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<bool> prev(k + 1, false);
    vector<bool> curr(k + 1, false);
    
    prev[0] = true;
    prev[arr[0]] = true;
    
    for (int index = 1; index < n; index++) {
        for (int target = 1; target <= k; target++) {
            bool notTake = prev[target];
            bool take = false;
            
            if (arr[index] <= target) {
                take = prev[target - arr[index]];
            }
            
            curr[target] = take || notTake;
        }
        prev = curr;
    }
    
    return prev[k];
}
