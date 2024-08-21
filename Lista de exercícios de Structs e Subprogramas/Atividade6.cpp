#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

struct pessoa{
    float altura;
    char sexo[30];
};

float calcular(float valor,char frase[30]){
    float resultado = 0;

    if(strcasecmp(frase,"Masculino")==0){
        resultado = (72.7 * valor) - 58;
    }else  if(strcasecmp(frase,"Feminino")==0){
        resultado = (62.1 * valor) - 44.7;
    }
    return resultado;
}

void imprimir(float valor){
    if(valor!=0){
        cout << endl << "Peso Ideal: " << valor <<"KG" << endl;
    }else{
        cout << endl << "Nao foi possivel calcular o peso ideal por favor verifique se voce1.60 digitou corretamente o sexo e a altura e tente novamente" << endl;
    }

}

int main() {
    pessoa p1;
    float resultado;

    cout << "PESO MEDIO" << endl << endl;
    cout << "Digite sua altura: ";
    cin >> p1.altura;
    cout << "Digite seu sexo(Masculino ou Feminino): ";
    fflush(stdin);
    cin.getline(p1.sexo,size(p1.sexo));

    resultado=calcular(p1.altura,p1.sexo);
    imprimir(resultado);
    system("pause");
    return 0;
}
