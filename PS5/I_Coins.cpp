#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vii vector<pair<int,int>>
#define pii pair<int,int>
#define pb push_back
#define For(i, a, n) for (int i = a; i < n; i++)
#define all(x) ((x).begin(), (x).end())
#define si set<int>
#define msi multiset<int,int>

int n;
double dp[3000][1503];

double fun(int ind,int mar, vector<double>& v)
{
    if(mar<0) return 0;
    if(ind==n) return 1;
    if(dp[ind][mar] != 0) return dp[ind][mar];
    return dp[ind][mar] = v[ind]*fun(ind+1,mar,v) + (1-v[ind])*fun(ind+1,mar-1,v);
}


void solve()
{
    // int n;
    cin >> n;
    vector<double> v(n);
    for(auto& it : v) cin >> it;
    // cout << setprecision(10) <<  fun(0,n/2,v);
    dp[0][n/2]=v[0];
    dp[0][n/2-1] = (1-v[0]);
    for(int i=1;i<n;i++)
    {
        dp[i][n/2]=dp[i-1][n/2]*v[i];
        for(int j=n/2-1;j>=0;j--)
        {
            dp[i][j] = v[i]*dp[i-1][j] + (1-v[i])*dp[i-1][j+1];
        }
    }
    double ans=0.0;
    // For(i,0,n/2) ans += dp[n-1][i];
    for(int i=0;i<=n/2;i++) ans += dp[n-1][i];
    cout << setprecision(10) << ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin >> t;
    For(i,0,3000)
    {
        For(j,0,1503) dp[i][j]=0;
    }
    while(t--)
    {
        solve();
    }
}