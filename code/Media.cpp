#include <iostream>

using namespace std;

int main(){

    double num1;
    double num2;
    double num3;
    double media;

    cout<<"Digite Primeira Prova: "<<endl;
    cin>>num1;
    cout<<"Digite a segunda Prova: "<<endl;
    cin>>num2;
    cout<<"Digite a nota do trabalho: "<<endl;
    cin>>num3;

    media=(num1+num2+num3)/3;

    if (media >=70){
        cout<<"Aprovado"<<endl;
    }else{
        if (media <50){
            cout<<"Reprovado"<<endl;
        } else {

            if ((media >= 50) && (media < 70)) {
                cout<<"Exame Final!!!!"<<endl;
            }
        }
    }
}