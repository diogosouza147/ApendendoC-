#include <iostream>

using namespace std;

int main(){

int a, b, c;
int maior;

cout<<"Digite o valor de A: ";
cin>>a;
cout<<"Digite o valor de B: ";
cin>>b;
cout<<"Digite o valor de C: ";
cin>>c;

if((a>b) && (a>c)){
    maior=a;
}else {
    if ((b>a) && (b>c)){
        maior=b;
    }else
        maior=c;
}
cout<<"O maior Sera:w "<<maior;

return 0;






}