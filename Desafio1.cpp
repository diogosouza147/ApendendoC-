#include <iostream>

using namespace std;

int main(){
    double numeros[5];
    double soma = 0;
    double maior, menor;


    for (int i = 0; i < 5; i++)
    {
    cout<<"digite os 5 numeros: "<< i + 1 << " :";
    cin>>numeros[i];
    soma += numeros[i];

    if(i == 0 ){
        maior = numeros[i];
        menor = numeros[i];
    }else{
        if (numeros[i] > maior){
            maior = numeros[i];
        }
        if (numeros[i] < menor){
            menor = numeros[i];
        }
        
        
        }
    }


    double media = soma /5;

    cout<<"Soma: "<<soma<<endl;
    cout<<"Media: "<<media<<endl;
    cout<<"Maior: "<<maior<<endl;
    cout<<"Menor: "<<menor<<endl;


    return 0;



    }

