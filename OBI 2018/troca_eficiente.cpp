#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin >> n >> t;
    vector<int> cima(n), baixo(n), troca(n, 0);  

    for(int i = 0; i < n; i++)
        cin >> cima[i];
    for(int i = 0; i < n; i++)
        cin >> baixo[i];

    for(int i = 0; i < t; i++){
        int inicio, fim;
        cin >> inicio >> fim;
        inicio--; 
        fim--;
        troca[inicio]++; 
        if (fim + 1 < n) 
            troca[fim + 1]--;  
    }

    int emTroca = 0;
    for(int i = 0; i < n; i++){
        emTroca += troca[i]; 
        if (emTroca % 2 == 1) { 
            swap(cima[i], baixo[i]);
        }
    }

    for(int i = 0; i < n; i++)
        cout << cima[i] << " ";

    cout << "\n";

    return 0;
}
