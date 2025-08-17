#include <bits/stdc++.h>
#define ll long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int main() {
    fast();
    int t;  cin>>t;
    for(int i = 1; i<=t; i++){
        int n; cin>>n;
        vector<ll>v(n);
        for(ll i = 0; i<n; i++) cin>>v[i];

        ll total = 1LL * n * (n + 1) / 2;
        ll beautiful = 0;

        ll cnt = 1;
        for(int i = 1; i<=n; i++){
            if(i < n && v[i] == v[i-1]) cnt++;
            else{
                beautiful += cnt * (cnt + 1) / 2;
                cnt = 1;
            }
        }
        ll ans = total - beautiful;
        cout << "Case " << i << ": " << ans << endl;
    }

    return 0;

}