#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> k >> n;
    vector<pair<int,int>> v;

    for(int i = 0; i < k; i++){
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end(), [](pair<int, int>& x, pair<int, int>& y) {
        if (x.first == y.first)
            return x.second < y.second; 
        return x.first > y.first;
    });

    pair<int, int> pos = v[n - 1];
    
    int res = 0;
    for (int i = 0; i < k; i++) {
        if (v[i].first == pos.first && v[i].second == pos.second)
            res++;
    }

    cout << res << endl;

    return 0;
}
