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
#define N 1000000007
int power(int a, int b, int MOD)
{
    if(b==0) return 1;
    int k = power(a,b/2,MOD);
    k %= MOD;
    if(b&1) return ((a)*(k*k)%MOD)%MOD;
    else return (k*k)%MOD;
}

void solve()
{
    int n;
    cin >> n;
    int sum=1,num=1,pro=1;
    vii v(n);
    int p=1;
    For(i,0,n)
    {
        cin >> v[i].first >> v[i].second;
        num *= (v[i].second + 1);
        num %= N;
        p *= (v[i].second + 1);
        p %= (N-1);
    }
    bool flag = true;
    For(i,0,n)
    {
        if(v[i].second & 1)
        {
            flag = false; break;
        }
    }
    if(flag)
    {
        For(i,0,n)
        {
            pro *= power(v[i].first,(v[i].second)/2,N);
        }
        pro = power(pro,p,N);
    }
    else
    {
        For(i,0,n)
        {
            pro *= power(v[i].first,(v[i].second),N);
        }
        pro = power(pro,p/2,N);
    }
    int den = 1;
    For(i,0,n)
    {
        sum *= (power(v[i].first,v[i].second+1,N) - 1)%N;
        den *= (v[i].first - 1)%N;
    }
    
    cout << num << " " <<  sum << " " <<  pro; 

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