#include <iostream>

using namespace std;

int main(){

    int mes;

    cout<<"Digite o mes (1-12): ";
    cin>>mes;

    switch (mes){
        case 1:
        cout<< " É Janeiro e estamos no verão";
        break;
        case 2:
        cout<< "É fevereiro e estamos no verão";
        break;
        case 3:
        cout<< "É março e estamos no outono";
        break;
        case 4:
        cout<< "É abril e estamos no outono";
        break;
        case 5:
        cout<< "É maio e estamos no outono";
        break;
        case 6:
        cout << "É junho e estamos no inverno";
        break;
        case 7:
        cout << "É julho e estamos no inverno";
        break;
        case 8:
        cout << "É agosto e estamos no inverno";
        break;
        case 9:
        cout << "É setembro e estamos na primavera";
        break;
        case 10:
        cout << "É outubro e estamos na primavera";
        break;
        case 11:
        cout << "É novembro e estamos na primavera";
        break;
        case 12:
        cout << "É dezembro e estamos no verão";
        break;
        default: 
        cout<< "Número inválido.";
    }
}
