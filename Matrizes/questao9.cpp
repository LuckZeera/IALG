#include <iostream>
using namespace std;
struct paciente{
    string nome;
    char letra;
    float altura,peso;
};
int main(){
    int n,maior,posicao=0;
    cin >> n;
    paciente p[n];
    float ideal[n],real[n];
    for(int i=0;i<n;i++){
        cin >> p[i].nome >> p[i].letra >> p[i].altura >> p[i].peso;
    }
    maior = p[0].peso;
    for(int i=0;i<n;i++){
        if(maior <= p[i].peso){
            maior = p[i].peso;
            posicao = i;
        }
        if(p[i].letra == 'H'){
            ideal[i] = (72.7*p[i].altura) - 58;
            real[i] = ideal[i] - p[i].peso;
        }
        else{
            ideal[i] = (62.1*p[i].altura) - 44.7;
            real[i] = ideal[i] - p[i].peso;
        }
    }
    cout << p[posicao].nome << endl;
    for(int i=0;i<n;i++){
        if(real[i] < 0)
            cout <<  p[i].nome << " " << real[i] << endl;
    }
    for(int i=0;i<n;i++){
        if(real[i] > 0){
            cout << p[i].nome << " " << real[i] << endl;
        }
    }
    return 0;
}