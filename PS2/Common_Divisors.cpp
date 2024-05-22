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
    vi v(1000004,0);
    // int b = 1;
    For(i,0,n)
    {
        int a;
        cin >> a;
        v[a]++;
    }
    int ans=1000000;
    for(;ans>1;ans--)
    {
        int ct = 0;
        for(int j=ans; j<=1000000;j+=ans)
        {
            ct += v[j];
        }
        if(ct>=2) break;
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