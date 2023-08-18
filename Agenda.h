#include <iostream>
class Agenda
{
public:
    Agenda();
    Agenda *elo;
    std::string nome, telefone;
    void Listar(Agenda *, bool);
    Agenda **Excluir(std::string);
    Agenda **Inserir(Agenda **, std::string, std::string);
    Agenda *Consultar(Agenda *, std::string);

protected:
private:
};
