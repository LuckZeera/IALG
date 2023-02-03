#include <iostream>
using namespace std;
int fatorial(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else{
        return n * fatorial(n-1);
    }
}
int main(){
    string palavra;
    cin >> palavra;
    int n = palavra.size();
    char *v = new char[n];
    int cont[n]{0},aux=0;
    for(int i=0;i<n;i++){
        v[i] = palavra[i];
    }
    for(int i=0;i<n;i++){
        cont[i] = 1;
        for(int j=0;j<n;j++){
            if(v[i] == v[j] and i!=j)
                cont[i]++;
            if(v[0] != v[j])
                aux++;  
        }
    }
    for(int i=0;i<n;i++)
        cout << cont[i] << endl;
    cout << aux/n;
    return 0;
}