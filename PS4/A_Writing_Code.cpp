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
int b, mod, n, m;
vi a(501);
int dp[501][501];

void fun(int ind, int rem, int cur)
{
    if (cur > b)
        return;
    if (rem == 0)
    {
        dp[ind][rem]++;
        return;
    }
    if(ind != n) fun(ind+1,rem,cur);
    dp[ind][rem]++;
    fun(ind,rem-1,cur+a[ind]);
}

void solve()
{
    // int n, m;
    cin >> n >> m >> b >> mod;
    // for (auto &it : a)
    //     cin >> it;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int ans = 0;
    fun(1, m, 0);
    For(i, 0, n)
    {
        ans += dp[i][0];
        ans %= mod;
    }
    cout << ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    For(i, 0, 501)
    {
        For(j, 0, 501)
            dp[i][j] = 0;
    }
    // cin >> t;
    while (t--)
    {
        solve();
    }
}