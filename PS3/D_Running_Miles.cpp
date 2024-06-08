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
    for(auto& it : v) cin >> it;
    vi fir,sec;
    fir.push_back(v[0]+1);
    For(i,1,n)
    {
        fir.push_back(max(fir[i-1],i+1+v[i]));
    }
    sec.push_back(v[n-1]-n);
    for(int i=n-2;i>=0;i--)
    {
        sec.push_back(max(sec[n-2-i],v[i]-i-1));
    }
    reverse all(sec);
    int ans=0;
    For(i,1,n-1)
    {
        ans = max(ans, v[i]+fir[i-1]+sec[i+1]);
    }

    cout << ans << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}