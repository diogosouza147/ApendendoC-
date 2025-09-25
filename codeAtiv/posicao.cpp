#include <iostream>
using namespace std;

int main(){
    int vetor [5] = {10,20,30,40,50};


    for (int i = 0 ; i < 5 ; i++)
    {
        cout<<vetor[i]<<endl;
    }
    cout<<endl<<endl;
    for (int i = 4; i >= 0; i--)
    {
        cout<<vetor[i]<<" ";
    }
    
    
}