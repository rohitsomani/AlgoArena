#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define pb push_back
#define For(i, a, n) for (int i = a; i < n; i++)
#define all(x) ((x).begin(), (x).end())

void solve()
{
    int x, n;
    cin >> x >> n;
    set<int> s;
    s.insert(0);
    s.insert(x);
    multiset<int> dif;
    dif.insert(x);
    For(i, 0, n)
    {
        int a;
        cin >> a;
        s.insert(a);
        auto it = s.find(a);
        auto fir = it, sec = it;
        fir--;
        sec++;
        int pre = *sec - *fir;
        int p=*sec - *it;
        int q = *it - *fir;
        auto rm = dif.lower_bound(pre);
        dif.erase(rm);
        dif.insert(p); dif.insert(q);
        auto la = dif.end();
        la--;
        cout << *la << " ";
    }
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