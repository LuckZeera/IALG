#include <iostream>
using namespace std;
struct dados{
    string nome;
    int ano,preco;
};
int main(){
    int qtd,ref;
    cin >> qtd;
    dados carro[qtd];
    for(int i=0;i<qtd;i++){
        cin >> carro[i].nome >> carro[i].ano >> carro[i].preco;
    }
    cin >> ref;
    for(int i=0;i<qtd;i++){
        if(ref > carro[i].preco){
            cout << carro[i].nome << "   " << carro[i].ano << "   " << carro[i].preco << endl;
        }
    }
    return 0;
}