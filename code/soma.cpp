#include <iostream>

using namespace std;

int main(){

    int soma;
    int numero;
    numero=0;
    soma=0;

    cout<<"Digite o valor que deseja somar"<<endl;

    while (numero !=-1)
    {
        cin>>numero;
        if (numero !=-1)
        {
         soma=soma+numero;   
        }
        
    }
    cout<<"Soma:" <<soma<<endl;

    return 0;
    
}