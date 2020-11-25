#pragma once
#include "animal.hpp"
#include "silvestre.hpp"

class Exotico : public Silvestre {
public:
    Exotico();
    Exotico(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, bool ameacadoDeExtincao, string origem);
    ~Exotico();

    string getOrigem();
    void setOrigem(string origem);
    
private:
    string origem;
};