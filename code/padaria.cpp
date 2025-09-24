#include <iostream>
#include <string>

using namespace std;

int main(){

    string nome;
    int codigo;
    int quantidade;
    double valor;
    double valorComDesconto;
    double troco;
    double nota;
    double total;
    double compra;
    

    cout<<"Digite o nome de seu produto: ";
    cin>>nome;
    cout<<"DIgite o codigo do iten: ";
    cin>>codigo;
    cout<<"Digite a quantidade: ";
    cin>>quantidade;
    cout<<"Digite o valor do produto: ";
    cin>>valor;

    cout<<"=========================================="<<endl;
    cout<<"       🥖    PADARIA SONHO BELO   🥖            "<<endl;
    cout<<"=========================================="<<endl;
    cout<<endl;
    cout<<"Nome: "<<nome<<endl;
    cout<<"Codigo: "<<codigo<<endl;
    cout<<"Estoque: "<<quantidade<<endl;
    cout<<"Valor: "<<valor<<endl;
    cout<<"=========================================="<<endl;
    cout<<"           🏧       CAIXA      🏧               "<<endl;
    cout<<"=========================================="<<endl;
    valorComDesconto = (valor * 0.90);
    cout<<"Valor Com desconto: "<<valorComDesconto<<endl;
    cout<<"Digite a quantidade que deseja comprar :";
    cin>>compra;
    total = valorComDesconto * compra;
    cout<<"Valor total: "<<total<<endl;
    cout<<"Digite a nota que ira ser paga: ";
    cin>>nota; 
    troco = (nota - total);
    cout<<"Seu troco sera de : "<<troco;
    cout<<endl;
    cout << "\n====================================\n";
    cout << "         🧾 COMPROVANTE 🧾   \n";
    cout << "====================================\n";
    cout << "Item:       " << nome << "\n";
    cout << "Codigo do item:       " << codigo << "\n";
    cout << "Quantidade:           " << quantidade << "\n";
    cout << "Valor Unitario:      R$ " << valor << "\n";
    cout << "Total:               R$ " << total << "\n";
    cout << "Desconto (10%):     -R$ " << valor - valorComDesconto << "\n";
    cout << "Total c/ desconto:  R$ " << total << "\n";
    cout << "Troco:               R$ " << troco << "\n";
    cout << "====================================\n";
    cout << "    Obrigado pela preferencia!     \n";
    cout << "====================================\n\n";
    



}