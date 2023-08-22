#include "Agenda.h"
using namespace std;

int main()
{

    Agenda **vet, a;
    vet = new Agenda*[2];
    vet[0] = NULL;
    vet[1] = NULL;
    string nome, telefone;
    bool achei;
    int op;

    do{
        system("clear");
        system (" clear ");
 cout << "1 - Inserir \n";
cout << "2 - Listar \ n";
cout << "3 - Excluir \n";
 cout << "4 - Sair \n";
 cout << " Informe sua opção : ";
cin>>op;

}while(op!= 5);

    return 0;
}
