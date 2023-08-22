#include "Agenda.h"
using namespace std;

int main()
{

    Agenda **vet, aux;
    vet = new Agenda *[2];
    vet[0] = NULL;
    vet[1] = NULL;
    string nome, telefone;
    bool achei;
    int op;

    do
    {
        system("clear");
        cout << "1 - Inserir \n";
        cout << "2 - Listar \n";
        cout << "3 - Excluir \n";
        cout << "4 - Consultar\n";
        cout << "4 - Sair \n";
        cout << " Informe sua opção : ";
        cin >> op;

        switch (op)
        {

        case 1:
            cout << "Digite o Nome:";
            cin.ignore();
            getline(cin, nome);

            cout << "Telefone:";
            cin >> telefone;
            vet = aux.Inserir(vet, nome, telefone);
            break;
        case 2:
            aux.Listar(vet[0]);
            break;
        case 3:
            aux.
        }

    } while (op != 5);

    return 0;
}
