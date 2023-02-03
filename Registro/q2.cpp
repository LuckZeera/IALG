#include <iostream>
#include <fstream>
using namespace std;

struct carro{
    string nome;
    int ano;
    float dist,cons;
};
carro info(carro a){
    float aux=a.cons;
    a.cons = aux;
    a.dist = (float)a.dist / aux;
    return a;
}
int main(){
    carro c,car;
    ifstream leitura("entrada.txt");
    ofstream grava("saida.txt");
    if(leitura){
        while(leitura >> c.nome and leitura >> c.ano and leitura >> c.dist and leitura >> c.cons){
            car = info(c);
        }
        grava << car.nome << endl << car.ano << endl << car.dist << endl << car.cons;
        grava.close();
    }
    leitura.close();
    return 0;
}
