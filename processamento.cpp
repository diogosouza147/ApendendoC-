#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite números (negativos serão ignorados, zero encerra):" << endl;

    while (true) {
        cin >> numero;

        if (numero < 0) {
            continue;
        }
        if (numero == 0) {
            break;
        }

        cout << "Número válido: " << numero << endl;
    }

    cout << "Processamento encerrado." << endl;
    return 0;
}