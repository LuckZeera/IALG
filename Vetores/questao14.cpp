#include <iostream>
using namespace std;
void saidavetor(int vetor[],int n,int cont,int aux){
    for(int i=0;i<aux;i++){
        if(vetor[i] > 0)
            cout << vetor[i] << " ";
    }
    cout << endl << n << endl << cont;
}
int main(){
    int n=5,cont=0,qtd=0;
    int *v = new int[n];
    int *vetor = new int[n];
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i] <= 0){
            i=n;
            qtd--;
        }
        if(i==n-1){
            for(int j=0;j<n;j++){
                if(v[j] > 0)
                    vetor[j] = v[j];
            }
            n += 5;
            delete[]v;
            v = new int[n];
            for(int x=0;x<n-5;x++){
                v[x] = vetor[x];
            }
            delete[]vetor;
            vetor = new int[n];
            cont++;
        }
        qtd++;
    }
    saidavetor(v,n,cont,qtd);
    return 0;
}