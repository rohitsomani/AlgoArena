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
void setIO(string s)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}
void solve()
{
    int n,k;
    cin >> n >> k;
    vector<tuple<int,int,int>> v;
    For(i,0,n)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        v.push_back({a,b,1});
        v.push_back({c,d,2});
    }
    sort all(v);
    int cur=1;
    int ans=0;
    For(i,1,2*n)
    {

    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    setIO("paintbarn");
    // cin >> t;
    while(t--)
    {
        solve();
    }
}