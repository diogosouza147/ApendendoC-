#include <iostream>
using namespace std;

int main() {
    float peso, altura;

    cout << "Digite seu peso: ";
    cin >> peso;

    cout << "Digite sua altura: ";
    cin >> altura;

    float imc = peso / (altura * altura);

    if (imc < 18.5) {
        cout << "Abaixo do peso";
    }
    else if (imc >= 18.5 && imc <= 24.9) {
        cout << "Peso normal";
    }
    else if (imc >= 25 && imc <= 29.9) {
        cout << "Sobrepeso";
    }
    else {
        cout << "Obesidade";
    }

    return 0;
}