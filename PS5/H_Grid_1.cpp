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
#define MOD 1000000007
void solve()
{
    int r,c;
    cin >> r >> c;
    vector<string> v(r);
    For(i,0,r)
    {
        cin >> v[i];
    }
    int arr[r][c];
    int cur=1;
    For(i,0,c)
    {
        if(v[0][i]=='#') cur=0;
        arr[0][i]=cur;
    }
    cur=1;
    For(i,0,r)
    {
        if(v[i][0]=='#') cur=0;
        arr[i][0]=cur;
    }
    For(i,1,r)
    {
        For(j,1,c)
        {
            arr[i][j] = (arr[i-1][j])%MOD + (arr[i][j-1])%MOD;
            arr[i][j] = arr[i][j] % MOD;
            if(v[i][j] == '#') arr[i][j]=0;
        }
    }
    cout << arr[r-1][c-1];
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