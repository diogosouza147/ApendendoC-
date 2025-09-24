#include <iostream>

using namespace std;

int main() {
    int segredo = 67;
    int palpite;

    cout << "Adivinhe o número de 1 a 100: ";

    do {
        cin >> palpite;
        if (palpite != segredo) {
            cout << "Errou! Tente novamente: ";
        }
    } while (palpite != segredo);

    cout << "Acertou!" << endl;

    return 0;
}