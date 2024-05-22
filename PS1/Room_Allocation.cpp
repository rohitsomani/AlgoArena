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
    set<pair<int,int>> s;
    int cur=1;
    vi ans(n);
    // ans[0]=1;
    cur = 1;
    // int ab,cd;
    // cin >> ab >> cd;
    // s.insert({cd,1});
    vii v;
    vector<tuple<int,int,int>> dat;
    For(i,0,n)
    {
        int a,b;
        cin >> a >> b;
        v.push_back({b,a});
        dat.push_back({b,a,i});
    }
    sort(v.begin(),v.end());
    sort(dat.begin(),dat.end());
    For(i,0,n)
    {
        int p,q;
        // cin >> p >> q;
        p=v[i].second;
        q=v[i].first;
        s.insert({p,0});
        auto it = s.find({p,0});
        if(it == s.begin())
        {
            s.erase(it);
            s.insert({q,cur});
            ans[i] = cur;
            cur++;
        }
        else
        {
            auto ba = it;
            it--;
            ans[i] = (*it).second;
            s.erase(it);
            s.erase(ba);
            s.insert({q,ans[i]});
        }
    }
    cout << cur-1 << "\n";
    vi op(n);
    For(i,0,n)
    {
        op[get<2>(dat[i])] = ans[i];
    }
    For(i,0,n) cout << op[i] << " ";
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