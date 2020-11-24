#pragma once
#include "animal.hpp"
#include <string>

using namespace std;

class Silvestre : public Animal {
public:
    Silvestre();
    Silvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, bool ameacadoDeExtincao);
    ~Silvestre();

    bool getAmeacadoDeExtincao() const;
    void setAmeacadoDeExtincao(bool ameacadoDeExtincao);

protected:
    bool ameacadoDeExtincao;
};