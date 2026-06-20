#include <iostream>
using namespace std;

int main (){
    int N,arreglo[1000];
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arreglo[i];
    }
    for(int i=N-1; i>=0; i-- ){
        cout<<arreglo[i]<<" ";
    }
    return 0;
}