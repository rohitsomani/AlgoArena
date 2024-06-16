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
    string p, q;
    cin >> p >> q;
    bool flag = true;
    int a, b, c, d;
    int ct = 0;
    a = b = c = d = 0;
    vii v;
    vii t;
    For(i, 0, n)
    {
        if (q[i] == 'C' && p[i] != 'C')
        {
            flag = false;
            break;
        }
        else if (p[i] == 'C' && q[i] == 'C')
        {
            v.push_back({c, d});
            t.push_back({a,b});
            if ((a + ct) < c || (b + ct) < d)
            {
                flag = false;
                break;
            }
            ct = a = b = c = d = 0;
        }
        else if (q[i] != 'C' && p[i] == 'C')
            ct++;
        switch (p[i])
        {
        case 'A':
            a++;
            break;
        case 'B':
            b++;
            break;
        }
        switch (q[i])
        {
        case 'A':
            c++;
            break;
        case 'B':
            d++;
            break;
        }
        if ((a + ct) < c)
        {
            flag = false;
            break;
        }
    }
    v.push_back({c,d});
    t.push_back({a,b});
    if ((a + ct) < c || (b + ct) < d)
        flag = false;
    a = b = c = d = 0;
    ct = 0;
    int ind=0;
    For(i, 0, n)
    {
        if (q[i] == 'C' && p[i] != 'C')
        {
            flag = false;
            break;
        }
        else if (p[i] == 'C' && q[i] == 'C')
        {
            ind++;
            // v.push_back({c, d});
            if ((a + ct) < c || (b + ct) < d)
            {
                flag = false;
                break;
            }
            ct = a = b = c = d = 0;
        }
        else if (q[i] != 'C' && p[i] == 'C')
            ct++;
        switch (p[i])
        {
        case 'A':
            a++;
            break;
        case 'B':
            b++;
            break;
        }
        switch (q[i])
        {
        case 'A':
            c++;
            break;
        case 'B':
            d++;
            break;
        }
        if(t[ind].first<v[ind].first)
        {
            ct--; a++;
            t[ind].first++;
        }
        if ((a) < c)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";
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