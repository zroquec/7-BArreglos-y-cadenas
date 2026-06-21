#include <iostream>
using namespace std;

bool palindromo(string palabra);

int main (){
    int N;
    string nombres[50];
    cin>>N;
  
    for(int i=0; i < N; i++){
        cin>>nombres[i];
    }
    for(int i=0; i < N; i++){
        if(palindromo(nombres[i])){
            cout<<"P"<<endl;
        }
        else{
            cout<<"NP"<< endl;
        }
    }
    return 0;
}

bool palindromo(string palabra){
 int i=0;
    int cont=0; 
    int igual=0; 

    while(palabra[i] != '\0'){
        cont++;
        i++;
    }

    for(int i=0; i<int(cont / 2); i++){
        if(palabra[i]==palabra[cont-i-1]){
            igual++;
        }
    }

    if(igual==int(cont / 2)){
        return true;
    }
    else {
        return false; 
    }
}