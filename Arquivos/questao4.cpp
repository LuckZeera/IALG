#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int n,cont=0,x=0;
    ifstream leitura("inteiros.dat");
    ofstream grava("primos.dat");
    if(leitura){
        int tam = leitura.tellg();
        cout << tam << endl;
        leitura.read((char *)(&n),sizeof(int));
        int vetor[n],novo[n];
        leitura.read((char *)(vetor),sizeof(int) * tam);
        for(int i=0;i<tam;i++){
            for(int j=1;j<=tam;j++){
                if(vetor[i] % j == 0)
                    cont++;
            }
            if(cont <= 2 and vetor[i] > 0){
                novo[x] = vetor[i];
                x++;
            }
        }
        grava.write((const char *)(&x),sizeof(int));
        grava.write((const char *)(novo),sizeof(int)*x);
        grava.close();
    }
    leitura.close();
    return 0;
}