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
vi v(1000006,2);
void solve()
{
    int n;
    cin >> n;
    cout << v[n] << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    v[1]=1;
    For(i,2,500003)
    {
        for(int j=2*i;j<1000006;j+=i) v[j]++;
    }
    while(t--)
    {
        solve();
    }
}