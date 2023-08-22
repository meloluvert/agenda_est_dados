#include <iostream>
class Agenda
{
public:
    Agenda *elo;
    std::string nome, telefone;
    void Listar(Agenda *);
    Agenda **Excluir(Agenda **, std::string, bool *);
    Agenda **Inserir(Agenda **, std::string, std::string);
    Agenda *Consultar(Agenda *, std::string);
};
