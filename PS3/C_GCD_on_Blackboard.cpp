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
    vi v(n);
    for(auto& it : v) cin >>it;
    vi fir(n),sec(n);
    fir[0]=v[0];
    For(i,1,n)
    {
        fir[i] = __gcd(v[i],fir[i-1]);
    }
    sec[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        sec[i]=__gcd(sec[i+1],v[i]);
    }
    int ans=max(fir[n-2],sec[1]);
    For(i,1,n-1)
    {
        ans = max(ans,__gcd(fir[i-1],sec[i+1]));
    }
    cout << ans;
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