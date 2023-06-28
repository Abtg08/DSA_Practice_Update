#include<bits/stdc++.h>
using namespace std;

int fn(int n, vector<int> &height, vector<int> &dp){
    if (n==1) return 0;
    if(dp[n]!= -1){
        return dp[n];
    }
    int left= fn(n-1, height, dp) + abs(height[n] - height[n-1]);
    int right= INT_MAX;
    if(n>1){
        right= fn(n-2, height, dp) + abs(height[n] - height[n-2]);
    }
    return dp[n]= min(left, right);
}

int main(){
    vector<int> height;
    int n;
    cout<<"Enter the length" << endl;
    cin>> n;
    vector<int> dp(n+1, -1);
    cout << "Enter numbers (enter -1 to stop):" << endl;
    while (true) {
        cin >> n;
        if (n == -1) {
            break;
        }
        height.push_back(n);
    }
    cout<< "The minimum travel cost is: "<< endl;
    cout<< fn(n,height, dp) << endl;
    return 0;
}