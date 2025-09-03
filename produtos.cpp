#include <iostream>

using namespace std;

int main(){

        double produtos[3];


        cout<<"Digite Primeiro Numero: ";
        cin>>produtos[0];
        cout<<"Digite Segundo Numero: ";
        cin>>produtos[1];
        cout<<"Digite Terceiro Numero: ";
        cin>>produtos[2];

        cout<<"ordem crescente:"<<endl;
        double maior = produtos[0];
        double menor = produtos[0];
        for (int i = 0; i < 3; i++)
        {
            cout<<produtos[i]<<":";
            if (produtos[i] > maior)
            {
                maior = produtos[i];

            }
            if (produtos[i] < menor)
            {
                menor = produtos[i];
            }
            
        }
        cout<<endl;
        cout<<"Maior: "<<maior<<endl;
        cout<<"Menor: "<<menor;
                  
        return 0;
    }