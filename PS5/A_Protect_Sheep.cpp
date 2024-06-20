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
    int r, c;
    cin >> r >> c;
    char arr[r][c];
    For(i, 0, r)
    {
        For(j, 0, c)
        {
            cin >> arr[i][j];
        }
    }
    bool flag = true;
    For(i, 1, r - 1)
    {
        For(j, 1, c - 1)
        {
            if (arr[i][j] == 'S')
            {
                if (arr[i + 1][j] == 'W' || arr[i][j - 1] == 'W' || arr[i][j + 1] == 'W' || arr[i - 1][j] == 'W')
                {
                    flag = false;
                    break;
                }
            }
            if (arr[i][j] == 'W')
            {
                if (arr[i + 1][j] == 'S' || arr[i][j - 1] == 'S' || arr[i][j + 1] == 'S' || arr[i - 1][j] == 'S')
                {
                    flag = false;
                    break;
                }
            }
        }
    }
    if (arr[0][0] == 'S')
    {
        int i = 0, j = 0;
        if (arr[i + 1][j] == 'W' || arr[i][j + 1] == 'W')
        {
            flag = false;
            // break;
        }
    }
    if (arr[0][0] == 'W')
    {
        int i = 0, j = 0;
        if (arr[i + 1][j] == 'S' || arr[i][j + 1] == 'S')
        {
            flag = false;
            // break;
        }
    }
    if (arr[0][c-1] == 'S')
    {
        int i = 0, j = c-1;
        if (arr[i + 1][j] == 'W' || arr[i][j -1] == 'W')
        {
            flag = false;
            // break;
        }
    }
    if (arr[0][c-1] == 'W')
    {
        int i = 0, j = c-1;
        if (arr[i + 1][j] == 'S' || arr[i][j - 1] == 'S')
        {
            flag = false;
            // break;
        }
    }
    if (arr[r-1][0] == 'S')
    {
        int i = r-1, j = 0;
        if (arr[i - 1][j] == 'W' || arr[i][j + 1] == 'W')
        {
            flag = false;
            // break;
        }
    }
    if (arr[r-1][0] == 'W')
    {
        int i = r-1, j = 0;
        if (arr[i - 1][j] == 'S' || arr[i][j + 1] == 'S')
        {
            flag = false;
            // break;
        }
    }
    if (arr[r-1][c-1] == 'S')
    {
        int i = r-1, j = c-1;
        if (arr[i - 1][j] == 'W' || arr[i][j - 1] == 'W')
        {
            flag = false;
            // break;
        }
    }
    if (arr[r-1][c-1] == 'W')
    {
        int i = r-1, j = c-1;
        if (arr[i - 1][j] == 'S' || arr[i][j - 1] == 'S')
        {
            flag = false;
            // break;
        }
    }
    if(flag)
    {
        cout << "Yes\n";
        For(i,0,r)
        {
            For(j,0,c)
            {
                if(arr[i][j]=='.') cout << "D";
                else cout << arr[i][j];
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "No\n";
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