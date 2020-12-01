#pragma once
#include "reptel.hpp"
#include "silvestre.hpp"

using namespace std;

class ReptelSilvestre : public Reptel, public Silvestre
{   
public:
    ReptelSilvestre();
    ReptelSilvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, bool temPernas, bool temNadadeiras, bool venenoso, bool peconhento, bool poeOvos, bool temCarapaca, bool consegueNadar);
    ~ReptelSilvestre();
};