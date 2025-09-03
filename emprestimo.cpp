#include <iostream>

using namespace std;

int main(){

    double salarioBruto;
    double prestacao;
    double limite;

    cout<<"Digite seu salario: ";
    cin>>salarioBruto;
    cout<<"Digite valor da prestção: ";
    cin>>prestacao;

    if (salarioBruto <= 4000)
    {
        limite = salarioBruto * 0.35;
    }else
    {
        limite = salarioBruto * 0.40;
    }if (prestacao <= limite)
    {
        cout<<"Pode conceder";
    }else
    {
        cout<<"Não pode conceder";
    }
    
    
    return 0;
    
    
    
    
    


}