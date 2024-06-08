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
    string s;
    cin >> s;
    map<int,int> mp;
    int cur=0;
    int ans=0;
    For(i,0,n)
    {
        mp[cur]++;
        cur -= s[i]-'1';
        ans += mp[cur];
    }
    cout << ans << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}