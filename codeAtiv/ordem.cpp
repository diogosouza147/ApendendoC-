#include <iostream>

using namespace std;

int main(){

    int dia;

    cout<<"Digite um numero de 1 a 7 para saber o dia da semana:";
    cin>>dia;
    switch (dia)
    {
    case 1:
        cout<<"Segunda"<<endl;
        break;

    case 2:
        cout<<"terça"<<endl;
        break;

    case 3:
        cout<<"Quarta"<<endl;
        break;

    case 4:
        cout<<"Quinta"<<endl;
        break;

    case 5:
        cout<<"Sexta"<<endl;
        break;

    case 6:
        cout<<"Sabado"<<endl;
        break;

    case 7:
        cout<<"domingo"<<endl;
        break;
    
    default:
        break;
    }
}