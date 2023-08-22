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
    char inclui;
    int op;

    do
    {
        system("clear");
        cout << "1 - Inserir \n";
        cout << "2 - Listar \n";
        cout << "3 - Excluir \n";
        cout << "4 - Consultar\n";
        cout << "5 - Sair \n";
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

        if(vet[0] == NULL ){
 cout << " Lista vazia !\n";
 } else{
cout << " Lista de contatos\n\n";
 aux.Listar(vet[0]);
 }


            break;
        case 3:
         if(vet[0] == NULL ){
 cout << " Lista vazia !\n";
 } else{
            cout << "Digite o Nome:";
            cin.ignore();
            getline(cin, nome);
            vet = aux.Excluir(vet,nome,&achei);
            if(achei){
                cout<<"Contato Excluído";
            }else{
            cout<<"Contato não encontrado";}

}
            break;
        case 4:

if(vet[0] == NULL ){
 cout << " Lista vazia !\n";
 }


            else{

            cout << "Digite o Nome:";
            cin.ignore();
            getline(cin, nome);
            Agenda *aux2 = aux.Consultar(vet[0],nome);
            if(aux2 == NULL){
                cout<<"não encontrado, deseja incluí-lo?";
                cin>>inclui;
                if(inclui == 's' || inclui == 'S') {
                cout<<"telefone:";
                cin>>telefone;
                vet = aux.Inserir(vet, nome, telefone);
                };

            }else{
            cout<<"Nome: "<<aux2->nome<<endl;
            cout<<"Telefone: "<<aux2->telefone ;
            }
 }


            break;

}
    cin.ignore().get();
    } while (op != 5);
cout<<"Adeus! Vou ser apagado da memória ):";
    return 0;
}
