#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string nome,frase;
    cin >>  nome;
    ifstream arquivo(nome);
    ofstream grava("cifrado");
    if(arquivo){
        while(arquivo >> frase){
            int n = frase.size();
            for(int i=0;i<n;i++){
                if(frase[i] != ' '){
                    if(frase[i] == 'X')
                        frase[i] = 'A';
                    else if(frase[i] == 'Y')
                        frase[i] = 'B';
                    else if(frase[i] == 'Z')
                        frase[i] = 'C';
                    else
                        frase[i] = char(frase[i]+3);
                }
                else
                    frase[i] = frase[i];
            }
            grava << frase << " ";
        }
        grava.close();
    }
    arquivo.close(); 
    return 0;
}