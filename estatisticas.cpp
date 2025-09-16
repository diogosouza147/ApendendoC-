#include <iostream>

using namespace std;

int main() {
    int numeros[] = {64, 6, 2, 12, 77, 11, 52};
    int tamanho = 7;
    int soma = 0;

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
    return 0;
}
