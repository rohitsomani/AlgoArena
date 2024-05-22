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
    int n,k;
    cin >> n >>k;
    vi v(n);
    for(auto& it : v) cin >> it;
    sort all(v);
    int a=0,b=n-1,ans=0;
    while(a<b)
    {
        if(v[b]+v[a] <= k)
        {
            ans++;
            b--; a++;
        }
        else
        {
            ans++; b--;
        }
    }
    if(a==b) ans++;
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