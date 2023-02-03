#include <iostream>
using namespace std;
int main(){
    int n,cont=0;
    cin >> n;
    int v[n],j=0;
    for(int i=1;i<=n;i++){
        v[j] = i;
        j++;
    }
    for(int i=0;i<n;i++){
        if((v[i] + v[i+1] + v[i+2]) == n and i+2 <= n){
            if(n%v[i] == 0 and n%v[i+1] == 0 and n%v[i+2] == 0){
                cout << v[i] << " " << v[i+1] << " " << v[i+2] << " ";
                i = n;
            }
        }
        cont++;
    }
    if(cont == n){
        cout << -1 << endl;
    }
    return 0;
}