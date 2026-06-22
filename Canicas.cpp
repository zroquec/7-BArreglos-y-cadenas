#include <iostream>
using namespace std;

int cont[1000000]={0};

int main(){
    int N,C,c;
    cin>>N;
    cin>>C;

    for(int i=0; i<C;i++){
        cin>>c;
        if(c>=1 && c<=N){
            cont[c-1]++;
        }
    }

    for(int i=0; i<N; i++){
        cout<<cont[i]<<'\n';
    }
    return 0;
}