#include<bits/stdc++.h>
#define ll long long
#define fast()  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes     cout<<"YES"<<endl
#define no      cout<<"NO"<<endl
#define endl  '\n'
using namespace std;
int main() {
    fast();
    ll L, W;
    while (cin >> L >> W) {
        if (L == 0 && W == 0){
            break;
        }
        double x = L / 8.0;
        double totalDistance = L + W - (sqrt(2 * L * x) - 2 * x);
        cout << fixed << setprecision(4) << totalDistance << endl;
    }
    return 0;
}
