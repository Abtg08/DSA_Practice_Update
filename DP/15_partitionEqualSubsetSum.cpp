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

bool canPartition(vector<int> &arr, int n)
{
	int totalSum=0;
	for(int i=0; i<arr.size(); i++){
		totalSum += arr[i];
	}
	if(totalSum%2 != 0){
		return false;
	}
	int target= totalSum/2;
	return subsetSumToK(n, target, arr);
}
