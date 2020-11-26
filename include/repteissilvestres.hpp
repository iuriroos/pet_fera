#pragma once
#include "repteis.hpp"
#include "silvestre.hpp"

using namespace std;

class RepteisSelvagens : public Repteis, Silvestre
{   
public:
    RepteisSelvagens();
    RepteisSelvagens(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, bool temPernas, bool temNadadeiras, bool venenoso, bool peconhento, bool poeOvos, bool temCarapaca, bool consegueNadar);
    ~RepteisSelvagens();

private:

};