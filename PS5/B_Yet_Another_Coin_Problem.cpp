#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vii vector<pair<int,int>>
#define pii pair<int,int>
signed main()
{
    int t; cin >> t;
    while(t--)
    {
        int n;
        // 1,3,6,10,15
        cin >> n;
        int ans=0;
        if(n>30)
        { 
            ans += n/15 - 1;
            n = n - 15*ans;
        }
        switch(n)
        {
            case 1: ans += 1; break;
            case 2: ans += 2; break;
            case 3: ans += 1; break;
            case 4: ans += 2; break;
            case 5: ans += 3; break;
            case 6: ans += 1; break;
            case 7: ans += 2; break;
            case 8: ans += 3; break;
            case 9: ans += 2; break;
            case 10: ans += 1; break;
            case 11: ans += 2; break;
            case 12: ans += 2; break;
            case 13: ans += 2; break;
            case 14: ans += 3; break;
            case 15: ans += 1; break;
            case 16: ans += 2; break;
            case 17: ans += 3; break;
            case 18: ans += 2; break;
            case 19: ans += 3; break;
            case 20: ans += 2; break;
            case 21: ans += 2; break;
            case 22: ans += 3; break;
            case 23: ans += 3; break;
            case 24: ans += 3; break;
            case 25: ans += 2; break;
            case 26: ans += 3; break;
            case 27: ans += 3; break;
            case 28: ans += 3; break;
            case 29: ans += 4; break;
            case 30: ans += 2; break;
            // case : ans += ; break;
        }
        cout << ans << "\n";
    }
}