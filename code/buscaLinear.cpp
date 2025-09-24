#include <iostream/
using namespace std;

int main() {
    int numeros[] = {10, 25, 30, 15, 40};
    int tamanho = 5;
    int valorProcurado = 30;
    int posicao=-1; 
    
    for(int i = 0; i < tamanho; i++) {
        if(numeros[i] == valorProcurado) {
            posicao=i; // Retorna o índice do elemento encontrado
        }
    }
    
    if(posicao != -1) {
        cout<< "Elemento " << valorProcurado << " encontrado na posição " << posicao <<endl;
    } else {
        cout<< "Elemento não encontrado" <<endl;
    }
    
    return 0;
}
