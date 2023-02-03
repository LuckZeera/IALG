#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int n;
    ifstream arquivo("numeros");
    ofstream gravap("pares");
    ofstream gravai("impares");
    if(arquivo){
        while(arquivo >> n){
            if(n%2 == 0)
                gravap << n << " ";
            else
                gravai << n << " ";
        }
        gravap.close();
        gravai.close();
    }
    arquivo.close();
    return 0;
}