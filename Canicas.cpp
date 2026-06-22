#include <iostream>
using namespace std;

int main(){
    int N,C,c;
    int cont[1000000]={0};
    cin>>N;
    cin>>C;

    for(int i=0; i<C;i++){
        cin>>c;
        if(c>=1 && c<=N){
            cont[c-1]++;
        }
    }
}