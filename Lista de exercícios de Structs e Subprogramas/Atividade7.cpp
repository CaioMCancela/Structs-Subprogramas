#include <iostream>
#include <cstdlib>

using namespace std;

int trasformar(int valor1,int valor2,int valor3){
    int totaldias =  (valor1 * 365) + (valor2 *30) + valor3;
    return totaldias;
}

void imprimir(int valor){
    cout << "Idade total em dias: " << valor << " dias" <<  endl <<endl;
}


int main() {
    int dia,mes,ano,totaldias;

    cout << "TRASFORMADOR DE IDADE" << endl << endl;
    cout << "Digite a sua idade(anos): ";
    cin >> ano;
    cout << "Digite a sua idade(meses): ";
    cin >> mes;
    cout << "Digite a sua idade(dias): ";
    cin >> dia;

    totaldias = trasformar(ano,mes,dia);
    imprimir(totaldias);
    system("pause");
    return 0;
}
