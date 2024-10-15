#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n, c;
    vector<int> nums;
    cin >> n;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int q;
    cin >> q;
    vector<int> inicio(q);
    vector<int> fim(q);
    for(int i=0; i<q; i++){
        cin >> inicio[i] >> fim[i];
    }

 
    for(int i=0; i<q; i++){
        int sum = 0;
        for(int j=inicio[i]; j<=fim[i]; j++){
            sum += nums.at(j);
        }
        cout << sum << endl;
    }


    return 0;
}