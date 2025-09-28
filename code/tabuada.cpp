#include <algorithm>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <iterator>
#include <locale>
#include <ostream>
#include <string>
#include <type_traits>


using namespace std;
int main() { 

	int num1;

	cout<<"Digite um numero: ";
	cin>>num1;
	cout<<"\n""Antecessor:"<<(num1-1)<<endl<<"Sucessor:"<<(num1+1)<<endl;
	cout<<"\n""Tabuada""\n"<<endl;
	for(int i = 1 ; i <= 10; i++){				
		cout<<num1<<"x"<< i << "="<< num1 * i <<endl;
			
		}
	cout<<"\n""2 em 2""\n"<<endl; 
	for(int i = 2; i<=30; i +=2 ){
		cout<<num1<<"+"<<i<<"="<< num1 + i <<endl;
	}


return  0;
}