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

    for (int i = 0; i < n - 1; i++) {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            for (int j = i + 1; j < n; j++) {
                if (texto[j] >= 'a' && texto[j] <= 'z' && texto[i] > texto[j]) {
                    char temp = texto[i];
                    texto[i] = texto[j];
                    texto[j] = temp;
                }
            }
            
        }
    }
    

    for (int i = 0; i < n; i++) {
        cout << texto[i];
    }
    cout << endl;
    return 0;
}