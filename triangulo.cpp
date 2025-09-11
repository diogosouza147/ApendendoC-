#include <iostream>

using namespace std;

int main() {
    int linhas;

    cout << "Digite o número de linhas do triângulo: ";
    cin >> linhas;

    for (int i = 1; i <= linhas; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}