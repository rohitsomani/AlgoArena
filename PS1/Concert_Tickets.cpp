#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vii vector<pair<int,int>>
#define pii pair<int,int>
#define pb push_back
#define For(i, a, n) for (int i = a; i < n; i++)

void solve()
{
    int n,m;
    cin >> n >> m;
    multiset<pii> ms;
    For(i,0,n)
    {
        int a;
        cin >> a;
        pii q;
        q.first =a; q.second=2;
        ms.insert(q);
    }
    For(i,0,m)
    {
        int a;
        cin >> a;
        pii q;
        q.first =a+1; q.second=1;
        ms.insert(q);
        auto it = ms.find(q);
        if(it == ms.begin())
        {
            cout << "-1\n";
            ms.erase(it);
        }
        else
        {
            auto r = it;
            it--;
            cout << (*it).first << "\n";
            ms.erase(r);
            ms.erase(it);
        }
    }
}

signed main()
{
    int t=1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
}