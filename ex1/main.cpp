#include <iostream>
using namespace std;
/*
 * 1) Observe o trecho de código abaixo:

int INDICE = 13, SOMA = 0, K = 0;

enquanto K < INDICE faça

{

K = K + 1;

SOMA = SOMA + K;

}
imprimir(SOMA);

Ao final do processamento, qual será o valor da variável SOMA?
 * */
int main() {

    int i = 13, soma = 0, k = 0;
    while(k<i)
    {
        k=k+1;
    }
    cout<<k<<endl; //resposta = 13
    return 0;
}
