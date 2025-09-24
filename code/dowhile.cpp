#include <iostream>

using namespace std;

int main(){

    int valor1, valor2;
    char operacao;
    int numero;

    do
    {
        
        cout<<"Digite um numero que deseja somar ou subtrair: ";
        cin>>valor1;
        cout<<"Digite um numero que deseja somar ou subtrair: ";
        cin>>valor2;
        cout<<"Digite a operacao (+, -,): ";
        cin>>operacao;

        if (operacao == '+') {
            cout<<"Soma: "<< (valor1+valor2) <<endl;
        }else if (operacao == '-') {
            cout<<"Subtracao: "<< (valor1-valor2) <<endl;
        } 

        cout<<"Digite 0 para sair: ";
        cin>>numero;

    }while (numero != 0);

    cout<<"Calculadora Finalizada!!!!";
    
    return 0;



}
