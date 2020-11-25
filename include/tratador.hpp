#pragma once

#include "funcionario.hpp"

using namespace std;

enum class Cor {
    Verde,
    Azul,
    Vermelho,
    Nenhum
};

class Tratador : public Funcionario {
public:
    Tratador();
    Tratador(string nome, string cpf, string matricula, double salario, string nascimento, Cor nivel_de_seguranca);
    ~Tratador();
    string getNivelDeSeguranca() const;
    void setNivelDeSeguranca(Cor nivel_de_seguranca);
    friend ostream& operator<< (ostream& o, Tratador* const t);
private:
    Cor nivel_de_seguranca;
};