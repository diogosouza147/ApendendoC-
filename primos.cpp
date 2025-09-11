#include <iostream>

using namespace std;

int main(){

    int numero;

    cout << "Digite um número limite: ";
    cin >> numero;

    for (int i = 2; i <= numero; i++)
    {
        bool primo = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                primo = false;
                break;
            }
        }
        if (primo) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}