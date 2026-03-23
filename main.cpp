#include <iostream>
#include <FSTREAM>
#include <string>
using namespace std;

const int sizeS=5;
const int sizeF=5;

int main(){
    string frases[sizeS];
    float floatntes[sizeF];

    //pedir datos al usuario:
    cout<<"Ingrese 5 frases: "<<endl;
    for(int i =0; i<sizeS; i++){
        getline(cin, frases[i]);
    }

    return 0;
}