#pragma once
#include <string>
#include "aves.hpp"
#include "silvestre.hpp"

using namespace std;

class AvesSilvestres : public virtual Aves, public virtual Silvestre{  
public:
    AvesSilvestres();
    AvesSilvestres(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, string corDasPenas, double tamanhoDoBico, double tamanhoDasPenas);
    ~AvesSilvestres();

private:

};