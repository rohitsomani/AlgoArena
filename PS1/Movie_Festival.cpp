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
    int n;
    cin >> n;
    vii v(n);
    For(i,0,n)
    {
        cin >> v[i].second >> v[i].first;
    }
    sort all(v);
    int ans=1;
    int e=v[0].first;
    for(int i=1;i<n;)
    {
        int j=i;
        for(;j<n;j++)
        {
            if(v[j].second >= e) break;
        }
        if(j==n) break;
        e=v[j].first;
        ans++;
        i=j+1;
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