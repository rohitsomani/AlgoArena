#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define pb push_back
#define For(i, a, n) for (int i = a; i < n; i++)
#define all(x) ((x).begin(), (x).end())
#define si set<int>
#define msi multiset<int, int>

void solve()
{
    int n;
    cin >> n;
    vector<tuple<int,int,int>> v;
    vi st;
    For(i,0,n)
    {
        int a,b,c;
        cin >> a >> b >> c;
        v.push_back({a,b,c});
        st.push_back(a);
    }
    vi ans(n+1,0);
    sort all(v);
    sort all(st);
    For(i,0,n)
    {
        auto it = upper_bound(st.begin(),st.end(),get<1>(v[i]));
        int val=*it;
        if(i) ans[i]=max(ans[i],ans[i-1]);
        ans[it-st.begin()]=max(ans[it-st.begin()],ans[i]+get<2>(v[i]));
        int ind=it-st.begin()+1;
        while(ind<n && st[ind]==val)
        {
            ans[ind]=max(ans[ind],ans[i]+get<2>(v[i]));
            ind++;
        }
    }
    int op=0;
    For(i,0,n+1) op=max(op,ans[i]);
    cout << op;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}