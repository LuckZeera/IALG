#include <iostream>
using namespace std;
int main(){
    int matriz[4][4],somai[4]{0},cont=0,somaj[4]{0};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            cin >> matriz[i][j];
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(matriz[i][j] > 0){
                somai[i] += matriz[i][j];
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(matriz[j][i] >= 0){
                somaj[i] += matriz[j][i];
            }
        }
    }

    for(int i=0;i<4;i++){
        if(somai[i] == 1 and somaj[i] == 1)
            cont++;
    }
    if(cont == 4)
        cout << "sim";
    else{
        cout << "nao" << endl;
    }
}