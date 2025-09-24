#include <iostream>
using namespace std;
int main() {
    int numeros[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = 7;
	int inicio = 0;
    int fim = tamanho - 1;
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
    for(int i = 0; i < tamanho; i++) 
    {
        cout << numeros[i] << " ";
    }
    cout<<endl<<endl;
    int valorBuscado;
    cout<<"Digite o valor que deseja ser buscado: ";
    cin>>valorBuscado;
    while (inicio <= fim)
    {
        int meio =(inicio + fim) / 2;
        if (numeros[meio] ==valorBuscado)
        {
            cout<<"Valor encontrado: "<<meio<<endl;
            break;
        }if (valorBuscado >numeros[meio])
        {
            inicio = meio + 1;
        }else
        {
            fim = meio - 1;
        }   
    }
    return 0;
}
