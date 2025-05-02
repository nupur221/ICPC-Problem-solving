#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main(){
    fast();
    int n; 
    while(cin>>n){
        if(n == 0) return 0;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int> pa(n + 1), pb(n + 1);
        for (int i = 1; i <= n; i++) {
            pa[i] = pa[i - 1] + a[i - 1];
            pb[i] = pb[i - 1] + b[i - 1];
        }

        int cnt = 0;
        int back = 0; 

        for (int i = 1; i <= n; i++) {
            int temp1 = pa[i];
            int temp2 = pb[i];
            int front;
            if (temp1 > temp2) front = 1;
            else if (temp2 > temp1)  front = 2;
            else  front = 0;

            if (back != 0 && front != 0 && back != front) cnt++;

            if (front != 0) back = front;
        }

        cout << cnt << endl;
    }
    return 0;
}