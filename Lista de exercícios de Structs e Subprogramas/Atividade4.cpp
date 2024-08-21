#include <iostream>
#include <cstdlib>

using namespace std;

float conversao(float valor){
    float  celsius = (5.0/9.0) * (valor-32.0);
    return celsius;
}

void imprimir(float valor1 ,float valor2){
    cout<< "Fahrenheit: " << valor1 << " | Celsius: " << valor2 << endl;
}


int main() {
    float resultCelsius,i;

    cout << "CONVERSAO FAHRENHEIT EM CELSIUS" << endl << endl;
    for(i=0; i<=100;i++){
        resultCelsius = conversao(i);
        imprimir(i,resultCelsius);
    }
    system("pause");
    return 0;
}
