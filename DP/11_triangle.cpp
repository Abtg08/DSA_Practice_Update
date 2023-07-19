#include <bits/stdc++.h> 
int minimumPathSum(vector<vector<int>>& t, int n){
	vector<int> next(n,0);
	vector<int> curr(n,0);
	for(int j=0; j<n; j++){
		next[j] = t[n-1][j];
	}

	for(int i=n-2; i>=0; i--)
	{
		for(int j=i; j>=0; j--)
		{
			int down= t[i][j] + next[j];
			int dg= t[i][j] + next[j+1];
			curr[j]= min(down, dg);
		}
		next= curr;
	}
	return next[0];
}