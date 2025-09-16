#include <iostream>
using namespace std;

int main(){

    int vetor[3] = {2, 4, 3,};
    int vetorPar[3];
    int vetorimpar[3];
    int quantidadePar = 0, quantidadeImpar = 0;

    for (int i = 0; i <3 ; i++)
    {
        if (vetor[i]%2 ==0)
        {
            vetorPar[quantidadePar] = vetor[i];
            quantidadePar++;
        }
        else{
            vetorimpar[quantidadeImpar] = vetor[i];
            quantidadeImpar++;
        }
        
    }
    cout<<"Numeros pares: "<<endl;
    for(int i = 0; i < quantidadePar; i++)
    {
        cout<<vetorPar[i]<<" ";
    }
    cout<<endl;
    cout<<"Numeros impares: "<<endl;
    for(int i = 0; i < quantidadeImpar; i++)
    {
        cout<<vetorimpar[i]<<" ";
    }
    return 0;
    

}