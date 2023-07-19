#include <bits/stdc++.h> 
int mod= (int) (1e9+7);
int getMaxPathSum(vector<vector<int>> &t)
{
        int n= t.size();
        int m= t[0].size();
        vector<int> prev(m,0), curr(m, 0);
        for(int j=0; j<m; j++){
            prev[j]= t[0][j];
        }
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){
                int up = t[i][j] + prev[j];
                int ld= t[i][j];
                if(j-1>=0){
                    ld+= prev[j-1];
                }
                else{
                    ld += -1e8;
                }
                int rd= t[i][j];
                if(j+1<m){
                    rd+= prev[j+1];
                }
                else{
                    rd += -1e8;
                }    
                curr[j] = max({up, ld, rd});
            }
            prev= curr;
        }
        int maxi= -1e9;
        for(int j=0; j<m; j++){
            maxi= max(maxi, prev[j]);
        }
        return maxi;
}