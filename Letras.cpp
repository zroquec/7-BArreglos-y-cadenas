#include <iostream>
using namespace std;

int main() {
    char texto[100];
    int n = 0;
    char letra;

    while (n < 100 && cin.get(letra) && letra != '\n') {
        texto[n] = letra;
        n++;
    }

    

    for (int i = 0; i < n; i++) {
        cout << texto[i];
    }
    cout << endl;
    return 0;
}