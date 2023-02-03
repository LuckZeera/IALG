#include <iostream>
using namespace std;
int main(){
    int i=0,j=0,cont=0;
    char matriz[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> matriz[i][j];
        }
    }
    for(i=0;i<3;i++){
        if(matriz[i][j] == matriz[i][j+1] and matriz[i][j] == matriz[i][j+2] and (matriz[i][j] == 'X' or matriz[i][j] == 'O') and j+2<=3){
            cout << matriz[i][j] << endl;
            cout << i <<" "<< j << endl << i <<" "<< j+1 << endl << i <<" "<< j+2 << endl;
            cont++;
        }
        else if(matriz[i][i] == matriz[i+1][i+1] and matriz[i][i] == matriz[i+2][i+2] and (matriz[i][i] == 'X' or matriz[i][i] == 'O') and i+2<=3){
            cout << matriz[i][i] << endl;
            cout << i <<" "<< i << endl << i+1 <<" "<< i+1 << endl << i+2 <<" "<< i+2 << endl; 
            cont++;
        }
    }
    i=0;
    for(j=0;j<3;j++){
        if(matriz[i][j] == matriz[i+1][j] and matriz[i+2][j] and matriz[i][j] != '.' and i+2<=3){
            cout << matriz[i][j] << endl;
            cout << i <<" "<< j << endl << i+1 <<" "<< j << endl << i+2 <<" "<< j << endl;
            j=3;
            cont++;
        }
        else if(matriz[i][j+2] == matriz[i+1][j+1] and matriz[i][j] == matriz[i+2][j] and matriz[i][j] != '.' and j+2<=3 and i+2<= 3){
            cout << matriz[i][j] << endl;
            cout << i <<" "<< j+2 << endl << i+1 <<" "<< j+1 << endl << i+2 <<" "<< j << endl;
            cont++;
        }
    }
    if(cont == 0)
        cout << -1;
    return 0;
}
