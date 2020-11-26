#include "repteissilvestres.hpp"
#include <iostream>

RepteisSelvagens::RepteisSelvagens() {}

RepteisSelvagens::RepteisSelvagens(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, bool temPernas, bool temNadadeiras, bool venenoso, bool peconhento, bool poeOvos, bool temCarapaca, bool consegueNadar)
    : Repteis(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, temPernas, temNadadeiras, venenoso, peconhento, poeOvos, temCarapaca, consegueNadar),
        Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, tipoSilvestre, origem, ameacadoDeExtincao)
    {}

RepteisSelvagens::~RepteisSelvagens() {}