#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> amigos;

    int x;

    for(int i=0; i<4; i++){
        cin >> x;
        amigos.push_back(x);
    }

    sort(begin(amigos), end(amigos));

    int t1 = amigos[0] + amigos[3];
    int t2 = amigos[1] + amigos[2];

    if(t1 >= t2)
        cout << t1 - t2 << endl;
    else
        cout << t2 - t1 << endl;

    return 0;
}