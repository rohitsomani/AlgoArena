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
    int n,x;
    cin >> n >> x;
    vi v(n);
    vii p(n);
    For(i,0,n)
    {
        cin >> v[i];
        p[i].first = v[i];
        p[i].second = i+1;
    }
    sort all(p);
    sort all(v);
    int fir=0,sec=0;
    For(i,0,n)
    {
        auto it = lower_bound(v.begin(),v.end(),x-v[i]);
        if(it == v.end()) continue;
        if((it-v.begin()) == i) continue;
        if(*it+v[i] == x)
        {
            fir = p[i].second;
            sec = p[(it-v.begin())].second;
            break;
        }
    }
    if(fir) cout << fir << " " << sec;
    else cout << "IMPOSSIBLE";
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