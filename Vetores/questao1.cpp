#include <iostream>
using namespace std;
void conteudov(int vetor[],int n){
    if(n==1)
        cout << "[" << vetor[0] << "]";
    else if(n==0)
        cout << "[]";
    else{
        for(int i=0;i<n;i++){
            if(i==0)
                cout << "[" << vetor[i];
            if(i != 0){
                cout << ", " << vetor[i];
            }
            if(i == n-1)
                cout << "]";
        }
    }
}
int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    conteudov(v,n);
}