#include <iostream>

using namespace std;

int main(){

double num1;
double num2;
int operacao;

cout << "Digite o primeiro número: ";
cin >> num1;

cout << "Digite o segundo número: ";
cin >> num2;

cout << "Digite 1-Somar 2-Subtrair 3-Multiplicar 4-Dividir: ";
cin >> operacao;

switch (operacao) {
    case 1:
        cout << "Valor: " << num1 + num2;
        break;
    case 2:
        cout << "Valor: " << num1 - num2;
        break;
    case 3:
        cout << "Valor: " << num1 * num2;
        break;
    case 4:
        if (num2 != 0)
            cout << "Valor: " << num1 / num2;
        else
            cout << "Erro: divisão por zero!";
        break;
    default:
        cout << "Opção inválida";
}

return 0;
}