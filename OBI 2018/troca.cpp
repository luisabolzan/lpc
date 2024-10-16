#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin >> n >> t;
    vector<int> cima(n), baixo(n), inicio(t), fim(t);

    for(int i=0; i<n; i++)
        cin >> cima[i];
    for(int i=0; i<n; i++)
        cin >> baixo[i];
    for(int i=0; i<t; i++){
        cin >> inicio[i] >> fim[i];
        inicio[i]--;
        fim[i]--;
    }

    for(int i=0; i<t; i++){
        for(int j=inicio[i]; j<=fim[i]; j++){
            int aux = cima[j];
            cima[j] = baixo[j];
            baixo[j] = aux;
        }
    }

    for(int i=0; i<n; i++)
        cout << cima[i] << " ";

    cout << "\n";

    return 0;
}