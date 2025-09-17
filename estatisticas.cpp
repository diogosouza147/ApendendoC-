#include <iostream>

using namespace std;

int main() {
    int numeros[] = {3, 7, 2, 8, 5, 1};
    int tamanho = 6;
    double soma;
    int vetorPar[6];
    int vetorImpar[6];
    double media;
    double mediana;

    for(int i = 0; i < tamanho - 1; i++) {
        int indiceMenor = i;
        
        for(int j = i + 1; j < tamanho; j++) {
            if(numeros[j] < numeros[indiceMenor]) {
                indiceMenor = j;
            }
        }
        
        int temp = numeros[i];
        numeros[i] = numeros[indiceMenor];
        numeros[indiceMenor] = temp;
    }
    
    cout << "Vetor ordenado: ";
	 for(int i = 0; i < tamanho; i++) {
        cout << numeros[i] << " ";
    }  

    cout<<endl<<endl;

    for (int i = 0; i <6 ; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            vetorPar[i] = numeros[i];
            cout<<"Vetor Par: "<<vetorPar[i]<<endl;
        }
        else
        {
            vetorImpar[i] = numeros[i];
            cout<<"Vetor Impar: "<<vetorImpar[i]<<endl;
        }
        
    }

    cout<<endl;
    cout<<"A media dos valores do vetor e: ";
    for (int i = 0; i <tamanho; i++)
    {
        soma = soma += numeros[i];
    }

    media = soma / tamanho;
    cout<<media<<endl;
    
    cout<<endl<<endl;
    cout<<"A mediana é: "<<endl;
    if (tamanho % 2 != 0)
    {
        mediana = numeros[tamanho / 2];
        cout<<mediana<<endl;
    }
    else
    {
        mediana = (numeros[tamanho/2 -1 ] + numeros[tamanho/2]) /2.0;
        cout<<mediana<<endl;
    }
    


    return 0;





}
