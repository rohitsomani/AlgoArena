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

int power(int a,int b)
{
    if(b==0) return 1;
    int k = power(a,b/2);
    k%=MOD;
    if(b&1) return ((k*k)%MOD)*a%MOD;
    else return ((k*k)%MOD)%MOD;
}

void solve()
{
    int a,b;
    cin >> a >> b;
    cout << power(a,b) << "\n";
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