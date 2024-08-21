#include <iostream>
#include <cstdlib>

using namespace std;

void categoria(int valor){
    if(valor>=5 && valor<=7){
        cout << "Categoria: Infantil A" << endl << endl;
    }else if(valor>=5 && valor<=10){
        cout << "Categoria: Infantil B" << endl << endl;
    }else if(valor>=11 && valor<=13){
        cout << "Categoria: Juvenil A" << endl << endl;
    }else if(valor>=14 && valor<=17){
        cout << "Categoria: Juvenil B" << endl << endl;
    }else if (valor >=18){
        cout << "Categoria: Adulto" << endl << endl;
    }

}


int main() {
    int idade;

    cout << "CATEGORIA DA NATACAO" << endl << endl;
    cout << "Digite a sua idade: ";
    cin >> idade;

    categoria(idade);
    system("pause");
    return 0;
}
