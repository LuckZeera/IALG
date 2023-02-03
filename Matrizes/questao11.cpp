#include <iostream>
using namespace std;
struct pessoa{
    string nome;
    int dia,mes,ano;
};
int main(){
    int n,dt,mt,at,idade;
    cin >> n;
    pessoa p[n];
    for(int i=0;i<n;i++){
        cin >> p[i].nome >> p[i].dia >> p[i].mes >> p[i].ano;
    }
    cin >> dt >> mt >> at;
    for(int i=0;i<n;i++){
        if(p[i].ano > at){
            idade = -1;
        }
        else if(p[i].ano < at){
            if(p[i].mes < mt)
                idade = at - p[i].ano;
            else if(p[i].mes > mt)
                idade = at - p[i].ano -1;
            else{
                if(p[i].dia <= dt)
                    idade = at - p[i].ano;
                else
                    idade = at - p[i].ano -1;
            }
        }
        else{
            if(p[i].mes < mt)
                idade = at - p[i].ano;
            else if(p[i].mes > mt)
                idade = -1;
            else{
                if(p[i].dia <= dt)
                    idade = at - p[i].ano;
                else 
                    idade = -1;
            }
        }
        if(idade == 0 or idade == 1){
            cout << p[i].nome << ": " << idade << " ano" << endl;
        }
        if(idade > 1)
            cout << p[i].nome << ": " << idade << " anos" << endl;
        if(idade == -1)
            cout << p[i].nome << ": " << idade << endl;
    }
    return 0;
}