#include <iostream>
using namespace std;
struct cliente{
    int cod;
    string nome;
};
struct conta{
    int codigo,codcliente;
};
struct compra{
    int co,codcompra,valor;
};
int main(){
    int n,i=0,ver[100];
    string resposta[100];
    cin >> n;
    cliente c[100];
    conta cont[100];
    compra compr[100];
    while(n != 0){
        if(n == 1){
            cin >> c[i].cod >> c[i].nome;
        }
        else if(n == 2){
            cin >> cont[i].codigo >> cont[i].codcliente;
        }
        else if(n == 3){
            cin >> compr[i].co >> compr[i].codcompra >> compr[i].valor;
        }
        else if(n == 4){
            cin >> ver[i];
        }
        cin >> n;
        i++;
    }
    for(int x=0;x<i;x++){
        for(int y=0;y<1;y++){
            if(c[x].cod != c[y].cod and x!=y){
                resposta[x] = "OK";
            }
            else 
                resposta[x] = "ERRO";
            if(cont[x].codigo != c[x].cod and cont[x].codigo == cont[y].codigo and x!=y)
                resposta[x] = "ERRO";
            else if(cont[x].codigo == c[x].cod and cont[x].codigo != cont[y].codigo)
                resposta[x] = "OK";
            if(compr[x].codcompra == compr[y].codcompra and x!= y or compr[x].co == compr[y].co and x!=y)
                resposta[x] = "ERRO";
            else if(compr[x].codcompra != compr[y].codcompra and compr[x].co != compr[y].co)
                resposta[x] = "OK";
        }
    }
    for(int x=0;x<i;x++){
        cout << resposta[x] << endl;
    }
    return 0;
}
