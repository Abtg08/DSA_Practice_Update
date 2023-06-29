#include<bits/stdc++.h>
using namespace std;

int houseRobber(vector<int>&a) {
    int n= a.size();
    int prev2=0;
    int prev= a[0];
    for(int i=0; i<n; i++){
        int pick= a[i];
        if(i>1){
            pick = pick+prev2;
        }
        int notPick= 0+ prev;
        int curr= max(pick, notPick);
        prev2= prev;
        prev= curr;
    }
    return prev;
}
