#include <iostream>
#include <cmath>
using namespace std;
struct habitantes{
    float salario;
    int idade,filhos;
};
int main(){
    int n,cont=0;
    cin >> n;
    habitantes h[n];
    float medias=0.0,maior,porcent,mediaf;
    for(int i=0;i<n;i++){
        cin >> h[i].salario >> h[i].idade >> h[i].filhos; 
    }
    maior = h[0].salario;
    for(int i=0;i<n;i++){
        medias += h[i].salario;
        mediaf += h[i].filhos;
        if(maior < h[i].salario)
            maior = h[i].salario;
        if(h[i].salario > 1000){
            cont++;
        }
    }
    porcent = (cont*1.0/ n*1.0)*100;
    cout << medias/n << endl << mediaf/n << endl << maior << endl << round(porcent) << "%" << endl; 
    return 0;
}