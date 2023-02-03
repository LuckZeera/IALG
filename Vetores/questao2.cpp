#include <iostream>
#include <cstring>
using namespace std;
int fatorial(int n){
    int cont=1,fat=1;
    while(cont <= fat){
        fat *= cont;
        cont++;
    }
}
int main(){
    int cont=0,n,posicao=0;
    char *palavra = new char [20];
    cin >> palavra;
    n = strlen(palavra);
    int v[n];
    for(int i=0;i<n;i++){
        for(int j=posicao;j<n;j++){
            if(palavra[i] == palavra[j] and posicao!= i){
                cont++;
                posicao = j;
            }
        }
    }
    cout << cont;
}
