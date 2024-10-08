#include <iostream>
#include <vector>
using namespace std;

/*
    v.begin() - 1o elemento do vetor
    v.end()-1 - ultimo elemento do vetor -> se nao botar o -1 passa 1 elemento
*/

int main(){

    int n;
    cin >> n;
    vector<int> v;

    for(int i=0; i < n; i++){
        int aux;
        cin >> aux;
        v.push_back(aux);
    }

    int a=0, b=0;
    int cont=0;

    while(n>0){
        int tam = v.size();
        if(v.at(0) > v.at(tam-1)){
            if(cont%2==0){
                a += v.at(0);
                v.erase(v.begin());
            } else {
                b += v.at(0);
                v.erase(v.begin());
            }
        } else {
            if(cont%2==0){
                a += v.at(tam-1);
                v.erase(v.end()-1);
            } else {
                b += v.at(tam-1);
                v.erase(v.end()-1);
            }
        }
        ++cont;
        --n;
    }

    cout << a << " " << b << endl;

    return 0;
}
