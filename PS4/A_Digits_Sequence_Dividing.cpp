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
    string s;
    cin >> s;
    if (n > 2)
    {
        cout << "YES\n2\n";
        cout << s[0] << " ";
        For(i, 1, n) cout << s[i];
        cout << "\n";
    }
    else if (s[0] >= s[1])
        cout << "NO\n";
    else
    {
        cout << "YES\n2\n";
        cout << s[0] << " ";
        For(i, 1, n) cout << s[i];
        cout << "\n";
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}