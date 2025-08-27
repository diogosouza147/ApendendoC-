#include <iostream>

using namespace std;

int main(){

    float num1;
    float num2;
    float num3;
    float media;

    cout<<"Digite Primeira nota: "<<endl;
    cin>>num1;
    cout<<"Digite a segunda nota: "<<endl;
    cin>>num2;
    cout<<"Digite a terceira nota: "<<endl;
    cin>>num3;

    media=(num1+num2+num3)/3;

    if (media >=7.0f){
        cout<<"Aprovado"<<endl;
    }else{
        if (media <5.0f){
            cout<<"Reprovado"<<endl;
        } else {

            if ((media >= 5.0f) && (media < 7.0f)) {
                cout<<"Recuperacao"<<endl;
            }
        }
    }
}