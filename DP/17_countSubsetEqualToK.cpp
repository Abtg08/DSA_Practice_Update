int findWays(vector<int>& arr, int k)
{
	int n= arr.size();
	vector<vector<int>> dp(n, vector<int>(k+1, 0));
	for(int i=0; i<n; i++){
		dp[i][0] = 1;
	}
	if(arr[0]<=k){
		dp[0][arr[0]] = 1;
	}
	for(int ind=1; ind<n; ind++){
		for(int sum=0; sum<=k; sum++){
			int notTake = dp[ind-1][sum];
			int take= 0;
			if(arr[ind]<=sum){
				take= dp[ind-1][sum-arr[ind]];
			}
			dp[ind][sum] = take + notTake;
		}
	}
	return dp[n-1][k];
}

/*              THERE IS AN ISSUE FOR TEST CASE: 74 53
7 7 7 9 1 4 4 7 8 2 10 3 9 8 1 9 7 1 2 8 7 3 5 3 9 8 9 7 8 3 2 4 2 6 10 1 6 4 10 5 3 7 1 6 5 6 1 8 6 7 5 1 2 3 5 2 9 10 3 1 2 10 5 7 10 2 7 9 3 4 2 8 10 5 

                DO CHECK IT ON CODESTUDIO
*/