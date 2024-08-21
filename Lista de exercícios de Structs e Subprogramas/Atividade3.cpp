#include <iostream>
#include <cstdlib>

using namespace std;

struct lugar{
    int A;
    int B;
};

int comparar(int valor1,int valor2) {
    int contador = 0;
    while(valor1 <= valor2) {
        valor1 += valor1 * 0.03;
        valor2 += valor2 * 0.015;
        contador++;
    }
    return contador;
}

void imprimir (int valor){
    cout << "Tempo para igualar sera de " << valor << " Anos" << endl << endl;
}

int  main() {
    lugar pais;
    int tempo;

    pais.A = 90000000;
    pais.B = 200000000;
    tempo = comparar(pais.A,pais.B);

    cout << "IGUALAR PAISES" << endl << endl;
    imprimir(tempo);
    system("pause");
    return 0;
}