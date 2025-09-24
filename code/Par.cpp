#include <iostream>

using namespace std;

int main(){

int num1;

cout<<"Digite um numero: ";
cin>>num1;

if (num1 % 2 == 0){
    if(num1 >=0){
    cout<<"numero e par e positivo"<<endl;
}else{ 
    cout<<"numero e par negativo";
}
}else {
    if(num1 >=0 ){
        cout<<"Numero e impar e positivo"<<endl;
    }else {
        cout<<"numero e impar e negativo"<<endl;
    }

}
return 0;

}













