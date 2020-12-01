#pragma once
#include <string>
#include "ave.hpp"
#include "silvestre.hpp"

using namespace std;

class AveSilvestre : public virtual Ave, public virtual Silvestre {
public:
    AveSilvestre();
    AveSilvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, double tamanhoDoBico, double tamanhoDasPenas);
    ~AveSilvestre();
};