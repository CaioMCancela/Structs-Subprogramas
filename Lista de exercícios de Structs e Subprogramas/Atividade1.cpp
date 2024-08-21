#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

struct estudante{
    char nome[100];
    int matricula;
};

int main() {
    estudante aluno[50];
    int quantidade;

    cout << "SISTEMA DE CADASTRO DE ALUNO" << endl << endl;
    cout << "Digite quantos alunos deseja adicionar: ";
    cin >> quantidade;

    for(int i=0;i<quantidade;i++){
        cout << "Digite o nome do aluno " << i+1 << ": ";
        fflush(stdin);
        cin.getline(aluno[i].nome,size(aluno[i].nome));
        cout << "Digite a matricula do aluno " << i+1 << ": ";
        cin >> aluno[i].matricula;
    }


    cout << endl << "REGISTRO DE MATRICULAS" << endl << endl;
    for(int i=0;i<quantidade;i++){
        cout << "Matricula: " << aluno[i].matricula << "|Nome: " << aluno[i].nome << endl;
    }
    system("pause");
    return 0;
}
