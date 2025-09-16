#include <iostream>

using namespace std;

int main(){

    const int TAMANHO = 5;
    int numeros[TAMANHO];

    cout<<"Digite: "<<TAMANHO<<"numeros: ";
    for (int i = 0; i < TAMANHO; i++)
    {
        cin>>numeros[i];
    }

    cout<<"Numeros digitados: ";
    for (int i = 0; i < TAMANHO; i++)
    {
        cout<<numeros[i]<<"";
    }
    
    cout<<endl;
    
    return 0;
}