#include<bits/stdc++.h>
using namespace std;

class Solution{
    long long minimumCost(string s) {
        int n= s.length();
        long long ans=0;
        if(n==0){
            return 0;
        }
        for(int i=0; i<n-1; i++){
            if(s[i] != s[i+1]){
                ans= ans+ min(i+1, n-i-1);
            }
        }
        return ans;
    }
};