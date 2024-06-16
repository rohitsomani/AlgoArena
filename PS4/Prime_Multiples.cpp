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
    int n, k;
    cin >> k >> n;
    vi v(n);
    for (auto &it : v)
        cin >> it;
    sort(v.rbegin(), v.rend());
    unsigned long long ans = 0;
    for (int b = 1; b < (1 << n); b++)
    {
        vi subset;
        unsigned long long mul = 1;
        int len = 0;
        for (int i = 0; i < n; i++)
        {
            if (b & (1 << i))
            {
                subset.push_back(v[i]);
                // mul *= v[i];
                // if(mul>k)
                // {
                // break;
                // }
                len++;
            }
        }
        // int len = subset.size();
        // int mul = 1;
        for (int j = 0; j < len; j++)
        {
            // if(k/subset[j] < mul) break;
            if(subset[j]> (k/mul + 1))
            {
                mul=k+1; break;
            }
            mul *= subset[j];
            // if (mul > k)
            //     break;
        }
        if (len & 1)
        {
            ans += k / mul;
        }
        else
            ans -= k / mul;
    }
    std::cout << ans;
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