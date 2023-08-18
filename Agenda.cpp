#include "Agenda.h"

Agenda::Agenda()
{
}

Agenda **Agenda::Inserir(Agenda **vet, std::string nome, std::string tel)
{
    Agenda *novo = new Agenda();
    novo->nome = nome;
    novo->telefone = tel;

    if (vet[0] == NULL)
    {
        vet[0] = novo;
        vet[1] = novo;
        vet[1]->elo = NULL;
    }
    else
    {

        Agenda *atual = vet[0], *ant = NULL;
        /*percorre*/
        while ((atual != NULL) && (novo->nome > atual->nome))
        {
            ant = atual;
            atual = atual->elo;
        }

        /*ele parou no início */
        if (atual == vet[0])
        {
            novo->elo = atual;
            vet[0] = novo;
        }
        else if (atual == NULL)
        {
            /*passou por todos */
            ant->elo = novo;
            vet[1] = novo;
        }
        else
        {
            ant->elo = novo;
            novo->elo = atual;
        }
    }
    return vet;
}
Agenda **Agenda::Excluir(Agenda *inicio, std::string nome)
{
    Agenda *aux;
    // aux = aux.Consultar(inicio, nome);
    if (aux == NULL)
    {
        std::cout << "Não temos esse nome";
    }
    else
    {
    }

    return NULL;
}
Agenda *Agenda::Consultar(Agenda *, std::string nome)
{
    return NULL;
}
