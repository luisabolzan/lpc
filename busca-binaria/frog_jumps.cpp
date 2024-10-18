#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        
        s = 'R' + s + 'R';
        int distPulo = 1;
        int fimR = 0;

        for(int i = 1; i < s.size(); i++) {
            if(s[i] == 'R') {
                distPulo = max(distPulo, i - fimR);
                fimR = i;
            }
        }
        
        cout << distPulo << '\n';
    }

    return 0;
}
