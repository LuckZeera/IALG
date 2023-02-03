#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int mat[3][3],cont=0;
    ifstream ler("entrada.txt");
    if(ler){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++)
                ler >> mat[i][j] ;
        }
    }
    if(mat[0][0] == mat[0][1] and mat[0][0] == mat[0][2] and mat[0][0] != 0)
        cout << mat[0][0];
    else if(mat[1][0] == mat[1][1] and mat[1][0] == mat[1][2] and mat[1][0] != 0)
        cout << mat[1][0];
    else if(mat[2][0] == mat[2][1] and mat[2][0] == mat[2][2] and mat[2][0] != 0)
        cout << mat[2][0];
    else if(mat[0][0] == mat[1][0] and mat[0][0] == mat[2][0] and mat[0][0] != 0)
        cout << mat[0][0];
    else if(mat[0][1] == mat[1][1] and mat[0][1] == mat[2][1] and mat[0][1] != 0)
        cout << mat[0][1];
    else if(mat[0][2] == mat[1][2] and mat[0][2] == mat[2][2] and mat[0][2] != 0)
        cout << mat[0][2];
    else if(mat[0][0] == mat[1][1] and mat[0][0] == mat[2][2] and mat[0][0] != 0)
        cout << mat[0][0];
    else if(mat[2][0] == mat[1][1] and mat[2][0] == mat[0][2] and mat[2][0] != 0)
        cout << mat[2][0];
    else 
        cout << 0;
    return 0;
}