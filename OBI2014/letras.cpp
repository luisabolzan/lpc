#include <bits/stdc++.h>
using namespace std;

int main(){

    char letra;
    cin >> letra;

    cin.ignore();
    string frase;
    getline(cin, frase);

    string palavra;
    vector<string> palavras;

    istringstream iss(frase);

    while(iss >> palavra){
        palavras.push_back(palavra);
    }

    double total=0.0;
    double parcial=0.0;

    for(auto word:palavras){
        total += 1.0;
        for(auto letter:palavra){
            if(letra == letter){
                parcial += 1.0;
                break;
            }
        }
    }

    double porcentagem = (parcial / total) * 100.00;

    cout << fixed << setprecision(1);
    cout << porcentagem << endl;

    return 0;
}
