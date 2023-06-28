// // DP Series 1st Question

// #include <bits/stdc++.h>
// using namespace std;

// //Memoization 

// int fi(int n, vector<int> &dp)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     if (dp[n] != -1)
//     {
//         return dp[n];
//     }
//     else
//     {
//         return dp[n] = fi(n - 1 , dp) + fi(n - 2, dp);
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the length" << endl;
//     cin >> n;
//     vector<int> dp(n+1, -1);
//     cout << "Fibonacci series is" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << fi(i, dp) << " ";
//     }
//     return 0;
// }

//Tabulation

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the length" << endl;
    cin >> n;
    vector<int> dp(n);
    cout << "Fibonacci series is" << endl;
    dp[0]=0;
    dp[1]= 1;
    cout<< dp[0] <<endl;
    cout<< dp[1] <<endl;
    for (int i = 2; i < n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
        cout<< dp[i]<< endl;
    }
    return 0;
}