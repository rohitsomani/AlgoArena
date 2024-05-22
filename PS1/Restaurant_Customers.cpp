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
    vii v;
    For(i,0,n)
    {
        pii p;
        int a,b;
        cin >> a >> b;
        // pii p;
        p.first=a,p.second=1;
        v.push_back(p);
        p.first=b, p.second=-1;
        v.push_back(p);
    }
    int cur=0,ans=0;
    sort all(v);
    For(i,0,2*n)
    {
        if(v[i].second == 1) cur++;
        else cur--;
        ans = max(ans,cur);
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