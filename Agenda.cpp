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
Agenda **Agenda::Excluir(Agenda **vet, std::string nome, bool *achei){
Agenda *atual = vet[0], *ant = NULL;
        /*percorre*/
        while ((atual != NULL) && (nome > atual->nome))
        {
            ant = atual;
            atual = atual->elo;
        }

    if (atual == NULL)
    {

        *achei = false;
        return vet;
    }else
    {
    *achei = true;
        if (atual == vet[0])
        {
            vet[0] = atual->elo;
        }
        else if (atual == vet[1])
        {
            /*passou por todos */

            vet[1] = ant;
            vet[1]->elo = NULL;

        }
        else
        {
            ant->elo = atual->elo;
        }
        delete (atual);
    }

    return NULL;
}
Agenda *Agenda::Consultar(Agenda *I, std::string nome)
{
    Agenda *aux = I;
    while(aux!= NULL  && aux->nome != nome)
        aux = aux->elo;

    return aux;
}
