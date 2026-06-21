#include <iostream>
using namespace std;

int main(){
    int P,n,respuesta,alumnos[1000];
    int conta[100]={0};
    cin>>P;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>respuesta;
        if(respuesta>=1 && respuesta<=P){
            conta[respuesta-1]++;
        }
    }

    for(int i=0;i<P;i++){
    cout<<i+1<<"-"<<conta[i]<<'\n';
    }
    return 0;
}