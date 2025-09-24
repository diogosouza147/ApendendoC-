#include <iostream>

using namespace std;

int main(){

    double compra;
    int cliente;

    cout<<"Digite o valor da compra:";
    cin>>compra;
    cout<<"Digite qual categoria (1=Bronze, 2=Prata, 3=Ouro): ";
    cin>>cliente;

    switch (cliente)
    {
    case 1:
        cout<<"Sua compra com desconto"<<compra-(0.05 * compra)<<endl;
        break;
    case 2:
        cout<<"Sua compra com desconto"<<compra-(0.10 * compra)<<endl;
        break;
    case 3:
        cout<<"Sua compra com desconto"<<compra-(0.15 * compra)<<endl;
    default:
        cout<<"opção invalida";
    return 0;
    }

    if(cliente > 0){
        cout<<"Valor Valido"<<endl;
    }else 
        cout<<"valor invalido"<<endl;
}