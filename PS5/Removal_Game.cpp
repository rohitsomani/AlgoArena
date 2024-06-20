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
int dp[5004][5004];

int fun(int s,int e, vi& sum, vi& v)
{
    if(dp[s][e] != -1) return dp[s][e];
    return dp[s][e] = max(v[s]+sum[e]-sum[s]-fun(s+1,e,sum,v),v[e]+sum[e-1]-sum[s-1]-fun(s,e-1,sum,v));
}

void solve()
{
    // int n;
    cin >> n;
    vi v(n+1);
    For(i,1,n+1) cin >> v[i];
    vi sum(n+1);
    sum[0]=0;
    For(i,1,n+1) sum[i]=sum[i-1]+v[i];
    For(i,1,n+1)
    {
        dp[i][i]=v[i];
    }
    cout << fun(1,n,sum,v);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin >> t;
    // memset(dp,-1,sizeof(dp));
    For(i,0,5004)
    {
        For(j,0,5004) dp[i][j]=-1;
    }
    while(t--)
    {
        solve();
    }
}