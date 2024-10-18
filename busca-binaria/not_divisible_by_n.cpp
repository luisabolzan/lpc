#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll indivisivel(ll n, ll k){
    ll l = 1, r = k * n, res=0;
    
    while(l <= r){
        ll m = (l + r) / 2;
        ll numInd = m - (m / n); // total - divisiveis por n

        if(numInd >= k){
            res = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        ll n, k;
        cin >> n >> k;
        
        cout << indivisivel(n,k) << '\n';
    }

    return 0;
}
