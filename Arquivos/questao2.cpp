#include <iostream>
#include <fstream>
using namespace std;
struct amigo{
     string nome;
     int idade;
     float altura;
     string telefone;
};
int main(){
    amigo amg;
    ifstream arquivo("agenda.txt");
    ofstream grava("saida.txt");
    if(arquivo){
        while(arquivo >> amg.nome and arquivo >> amg.idade and arquivo >> amg.altura and arquivo >> amg.telefone){
            grava << "--------" << endl;
            grava << amg.nome << " tem " << amg.idade << " anos e " << amg.altura << " de altura." << endl;
            grava << "Tel.: " << amg.telefone << "." << endl;
            grava << "--------" << endl;
        }
        grava.close();
    }
    arquivo.close();
    return 0;
}
