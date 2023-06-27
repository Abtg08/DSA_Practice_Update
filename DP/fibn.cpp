// DP Series 1st Question

#include <bits/stdc++.h>
using namespace std;

int fi(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    else
    {
        return dp[n] = fi(n - 1 , dp) + fi(n - 2, dp);
    }
}

int main()
{
    int n;
    cout << "Enter the length" << endl;
    cin >> n;
    vector<int> dp(n+1, -1);
    cout << "Fibonacci series is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fi(i, dp) << " ";
    }
    return 0;
}