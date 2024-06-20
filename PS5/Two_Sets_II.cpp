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
#define MOD 1000000007
int dp[502][125255];

int fun(int ind, int sum)
{
    if(sum==0) return 1;
    if(sum<0) return 0;
    if(ind==1)
    {
        if(sum==1) return 1;
        else return 0;
    }
    if (dp[ind][sum] != -1)
        return dp[ind][sum];
    return dp[ind][sum] = (fun(ind-1,sum-ind)+fun(ind-1,sum))%(2*MOD);
}

void solve()
{
    int n;
    cin >> n;
    // int ans = 0;
    int sum = (n*(n+1))/2;
    if(sum&1)
    {
        cout << "0";
        return;
    }
    cout << fun(n,sum/2)/2;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    For(i, 0, 502)
    {
        For(j, 0, 125255) dp[i][j] = -1;
    }
    dp[1][1]=1;
    dp[2][1]=1;
    dp[2][2]=1;
    while (t--)
    {
        solve();
    }
}