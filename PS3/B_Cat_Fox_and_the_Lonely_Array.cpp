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
    vi v(n);
    for (auto &it : v)
        cin >> it;
    int l = 1, r = n;
    int arr[21][n + 1];
    for (int i = 0; i < 21; i++)
        arr[i][0] = 0;
    For(i, 0, n)
    {
        bitset<21> bs(v[i]);
        For(j, 0, 21)
        {
            arr[j][i + 1] = arr[j][i] + bs[j];
        }
    }
    int num = 0;
    For(i, 0, 21)
    {
        if (arr[i][n])
            num += (2 << i);
    }
    while (l < r)
    {
        int m = (l + r) / 2;
        bool flag = true;
        For(i,0,(n-m+1))
        {
            int temp=0;
            For(j,0,21)
            {
                if(arr[j][i+m]-arr[j][i]) temp += (2<<j);
            }
            if(temp != num)
            {
                flag = false; break;
            }
        }
        if(flag)
        {
            r=m;
        }
        else l=m+1;
    }
    cout << l << "\n";
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