#include <iostream>

using namespace std;

int main(){

    int numeros[10];

    cout<<"Digite 10 numeros que deseja somar e multiplicar: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>numeros[i];
    }
    int soma = 0;
    for (int i = 0; i < 10; i++)
    {
        soma += numeros[i];
    }
    int multiplicacao = 1;
    for (int i = 0; i < 10; i++)
    {
        multiplicacao *= numeros[i];
    }
    cout<<"A soma dos 10 numeros são: "<<" ";
    cout<<soma<<endl;
    cout<<"A multiplicaçao dos 10 numeros são: "<<" ";
    cout<<multiplicacao;


    return 0;



}