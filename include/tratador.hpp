#pragma once

#include "funcionario.hpp"

using namespace std;

enum Cor {
    Verde,
    Azul,
    Vermelho
};

class Tratador : public Funcionario {
public:
    Tratador();
    Tratador(string nome, string cpf, string matricula, double salario, string nascimento, Cor nivel_de_seguranca);
    ~Tratador();
    Cor getNivelDeSeguranca() const;
    void setNivelDeSeguranca(Cor nivel_de_seguranca);
private:
    Cor nivel_de_seguranca;
};