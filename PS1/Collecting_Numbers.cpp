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

void solve()
{
    int n;
    cin >> n;
    vii v(n);
    For(i,0,n)
    {
        int a;
        cin >> a;
        v[i].first = a;
        v[i].second = i;
    }
    sort all(v);
    int ans=0;
    For(i,0,n-1)
    {
        if(v[i].second > v[i+1].second) ans++;
    }
    cout << ans+1;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
}