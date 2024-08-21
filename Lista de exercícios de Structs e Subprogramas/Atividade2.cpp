#include <iostream>
#include <cstdlib>

using namespace std;

int maior(int valor1,int valor2,int valor3){
    int maior;
    if(valor1>valor2 && valor1>valor3){
        maior = valor1;
    }else if(valor2>valor1 && valor2>valor3){
        maior = valor2;
    }else if(valor3>valor1 && valor3>valor2){
        maior =valor3;
    }
    return maior;
}
void imprimir(int valor){
    cout << endl << "Maior Valor: " << valor << endl << endl;
}


int main() {
    int valores[3],resultado;

    cout << "MAIOR VALOR" << endl << endl;
    for(int i=0;i<3;i++){
        cout << "Digite o numero " << i+1 << ": ";
        cin >> valores[i];
    }

    resultado = maior(valores[0],valores[1],valores[2]);
    imprimir(resultado);
    system("pause");


    return 0;
}
