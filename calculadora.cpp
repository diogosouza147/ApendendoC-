
#include <fstream>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <type_traits>

using namespace std;
int main() { 

double num1;
double num2;
char operacao;

cout<<"Digite Primeiro digito que deseja fazer a conta: ";
	cin>>num1;
cout<<"Digite Segundo digito que deseja fazer a conta: ";
	cin>>num2;
cout<<"Digite a operacao (+, -, *, /): ";
	cin>>operacao;

if (operacao == '+') {
	cout<<"Soma: "<< (num1+num2) <<endl;
}else if (operacao == '-') {
	cout<<"Subtracao: "<< (num1-num2) <<endl;
}else if (operacao == '*') {
	cout<<"Multiplicacao: "<< (num1*num2)<<endl;
}else if (operacao == '/') {
	cout<<"Divisao: "<< (num1/num2)<<endl;
} else {
cout<<"Escolha errada!!!!!!";
}
	
return  0;
}