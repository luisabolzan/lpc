#include <bits/stdc++.h>
using namespace std;

int main(){

    string carac;
    cin >> carac;

    int copas[13] {};
    int ouros[13] {};
    int espadas[13] {};
    int paus[13] {};

    int fc=1, fu=1, fe=1, fp=1;


    for(int i=0; i<carac.length(); i = i + 3){
        string sub = carac.substr(i, 3);

        string snum = sub.substr(0,2);
        int num = stoi(snum) - 1;

        string c = sub.substr(2,1);

        if(c == "C"){
            if(copas[num] == 0)
                copas[num] = 1;
            else
               fc = -1;
        }else if(c == "P"){
            if(paus[num] == 0)
                paus[num] = 1;
            else
               fp = -1;
        }else if(c == "E"){
            if(espadas[num] == 0)
                espadas[num] = 1;
            else
                fe = -1;
        }else if(c == "U"){
            if(ouros[num] == 0)
                ouros[num] = 1;
            else
                fu = -1;
        }
    }

    int sc=0, sp=0, su=0, se=0;

    if(fc == -1)
        cout << "erro\n";
    else {
         for(int num=0; num<13; num++)
            sc += copas[num];
        sc = 13 - sc;
        cout << sc << endl;
    }

    if(fe == -1)
        cout << "erro\n";
    else {
         for(int num=0; num<13; num++)
            se += espadas[num];
        se = 13 - se;
        cout << se << endl;
    }

    if(fu == -1)
        cout << "erro\n";
    else {
         for(int num=0; num<13; num++)
            su += ouros[num];
        su = 13 - su;
        cout << su << endl;
    }

    if(fp == -1)
        cout << "erro\n";
    else {
         for(int num=0; num<13; num++)
            sp += paus[num];
        sp = 13 - sp;
        cout << sp << endl;
    }


    return 0;
}