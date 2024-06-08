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
    string s;
    cin >> s;
    int len = s.size();
    int arr[26][len+1];
    For(i,0,26) arr[i][0]=0;
    For(i,0,len)
    {
        int ct = s[i]-'a';
        for(int j=0;j<26;j++) arr[j][i+1] = arr[j][i];
        arr[ct][i+1]++;
    }
    int q;
    cin >> q;
    For(i,0,q)
    {
        int l,r;
        cin >> l >> r;
        if(r-l)
        {
            int num = (r-l)/2+1;
            if(!(r-l)&1) num++;
            int ct=0;
            vi p;
            For(j,0,26)
            {
                if(arr[j][r]-arr[j][l-1]) p.push_back(arr[j][r]-arr[j][l-1]);
            }
            if(p.size() == 1)
            {
                cout << "No\n"; continue;
            }
            sort all(p);
            int k = p[0]+p[1];
            if(2*k<=(r-l+1)) cout << "Yes\n";
            else cout << "No\n";
            // // if(arr[s[l-1]])
            // if(ct>=1) cout << "No\n";
            // else cout << "Yes\n";
        }
        else cout << "Yes\n";
    }
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