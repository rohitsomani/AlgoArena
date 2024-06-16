#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define pb push_back
#define For(i, a, n) for (int i = a; i < n; i++)
#define all(x) ((x).begin(), (x).end())
#define si set<int>
#define msi multiset<int, int>

int dp[501][501];

void solve()
{
    int a,b;
    cin >> a >> b;
    for (int i = 1; i <= 500; i++)
    {
        for (int j = 1; j <= 500; j++)
        {
            if (i == j)
            {
                dp[i][j] = 0;
            }
            else
            {
                dp[i][j] = INT64_MAX;
                for (int k = 1; k <= i - 1; k++)
                {
                    dp[i][j] = min(dp[i - k][j] + dp[k][j] + 1, dp[i][j]);
                }
                for (int k = 1; k <= j - 1; k++)
                {
                    dp[i][j] = min(dp[i][j - k] + dp[i][k] + 1, dp[i][j]);
                }
            }
        }
    }
    cout << dp[a][b];
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}