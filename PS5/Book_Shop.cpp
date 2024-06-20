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
int ans=0;
int n,x;
vii v;
int fun(int ind,int pag, int pri, vii& v)
{
    if(ind==n) return pag;
    if(pri>x) return -INFINITY;
    if(pri+ (v[ind]).first <=x)
    {
        return max(fun(ind+1,pag+v[ind].second,pri+v[ind].first,v),fun(ind+1,pag,pri,v));
    }
    else
    {
        return fun(ind+1,pag,pri,v);
    }
}

void solve()
{
    cin >> n >> x;
    vii v(n);
    For(i,0,n) cin >> v[i].first;
    For(i,0,n) cin >> v[i].second;
    sort all(v);
    vi p(x+1,0);
    For(i,0,n)
    {
        for(int j=x;j>=v[i].first;j--)
        {
            // if(j>=v[i].first)
            p[j]=max(p[j],v[i].second+p[j-v[i].first]);
        }
    }
    int ans=0;
    for(int i=1;i<=x;i++) ans = max(ans,p[i]);
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