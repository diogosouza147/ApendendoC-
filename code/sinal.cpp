#include <iostream>
#include <csignal>
#include <unistd.h>
#include <cstdlib>

using namespace std;


int main() {

int num1;

cout<<"Digite um numero: ";
cin>>num1;

if(num1 >=0){
    cout<<"Positivo"<<endl;
}else if (num1< 0){
    cout<<"Negativo"<<endl;
}

}


