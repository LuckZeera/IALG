#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int vetor[n];
    for(int i=0;i<n;i++)
        cin >> vetor[i];
    ofstream grava("inteiros.dat");
    grava.write((const char*)(&n),sizeof(int));
    grava.write((const char*)(vetor),sizeof(int)*n);
    grava.close();
}
