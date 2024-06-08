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
    int n,k;
    cin >> n >> k;
    vi v(n);
    for(auto& it : v) cin >> it;
    For(i,1,n)
    {
        if(v[i]<(v[i-1]-k)) v[i]=v[i-1]-k;
    }
    for(int i=n-2;i>=0;i--)
    {
        if(v[i]<(v[i+1]-k)) v[i]=v[i+1]-k;
    }
    For(i,0,n) cout << v[i] << " ";
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