#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vii vector<pair<int,int>>
#define pii pair<int,int>
#define pb push_back
#define For(i, a, n) for (int i = a; i < n; i++)
#define all(x) ((x).begin(), (x).end())

void solve()
{
    int n,m,k;
    cin >> n >> m >> k;
    multiset<int> ms;
    For(i,0,n)
    {
        int a;
        cin >> a;
        ms.insert(a);
    }
    int ans=0;
    // For(i,0,m)
    // {
    //     int a;
    //     cin >> a;
    //     auto it = ms.lower_bound(a-k);
    //     int dif = abs(a-*it);
    //     if(dif<=k)
    //     {
    //         ans++;
    //         ms.erase(it);
    //     }
    // }
    vi v(m);
    for(auto& it : v) cin >> it;
    sort(v.begin(),v.end());
    For(i,0,m)
    {
        int a = v[i];
        auto it = ms.lower_bound(a-k);
        int dif = abs(a-*it);
        if(dif<=k)
        {
            ans++;
            ms.erase(it);
        }
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