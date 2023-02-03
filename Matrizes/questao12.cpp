#include <iostream>
using namespace std;
struct cartinha{
    string nome,pedido;
};  
struct brinquedo{
    string nb;
    int estoque,qtd;
};
int main(){
    int n,n1,cont;
    cin >> n;
    cartinha c[n];
    int v[n];
    for(int i=0;i<n;i++)
        cin >> c[i].nome >> c[i].pedido;
    brinquedo b;
    cin >> b.estoque;
    brinquedo b1[b.estoque];
    for(int i=0;i<b.estoque;i++)
        cin >> b1[i].nb >> b1[i].qtd;
    for(int i=0;i<b.estoque;i++){
        cont = 1;
        for(int j=0;j<n;j++){
            if(c[i].pedido == c[j].pedido and j != i)
                cont++;
        }
        if(cont > b1[i].qtd and c[i].pedido == b1[i].nb)
            cout << b1[i].nb << " ";  
        
    }
    return 0;
}