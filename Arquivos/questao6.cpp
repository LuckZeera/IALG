#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string nome;
    cin >> nome;
    ifstream arq(nome);
    ofstream grava("saida.txt");
    if(arq){
        int n;
        while(arq >> n){
            if(n % 3 != 0)
                grava << n << " ";
        }
        grava.close();
    }
    arq.close();
    return 0;
}