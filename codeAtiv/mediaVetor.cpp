#include <iostream>

using namespace std;

int main()
{

    float numeros[6];
    float media = 0;

    cout<<"Digite 6 numeros que deseja saber a media entre eles: "<<endl;
    for (int i = 0; i < 6; i++)
    {
        cin>>numeros[i];
        media += numeros[i] /6;
    }
    
    cout<<"A media é: "<<media;


}