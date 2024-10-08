#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<pair<string,string>> v;

    for(int i=0; i<n; i++){
        string a, b;
        cin >> a >> b;
        v.insert(make_pair(a, b));
    }

    int tam = v.size();

    cout << tam << endl;

    return 0;
}