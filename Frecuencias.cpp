#include <iostream>
using namespace std;

int main(){
int P,n,f;
int alumnos[1000];
int conta[100];
cin>>P;
cin>>n;
for (int i=0;i<P;i++){
    conta[i]=0;
}
for(int i=0; i<n; i++){
    cin>>alumnos[i];
}
for(int i=0;i<n; i++){
    f=1;
    while(f<5){
        if(alumnos[i]!=f){  
            f++;
        }
        else{
            conta[f-1]++;
        }
    }
}

for(int i=0;i<P;i++){
    cout<<i+1<<"-"<<conta[i]<<'\n';
}
}