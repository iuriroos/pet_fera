#include <iostream>
#include "reptelsilvestre.hpp"

ReptelSilvestre::ReptelSilvestre() {}

ReptelSilvestre::ReptelSilvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, bool temPernas, bool temNadadeiras, bool venenoso, bool peconhento, bool poeOvos, bool temCarapaca, bool consegueNadar)
    :   Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador),
        Reptel(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, temPernas, temNadadeiras, venenoso, peconhento, poeOvos, temCarapaca, consegueNadar),
        Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, tipoSilvestre, origem, ameacadoDeExtincao) {}

ReptelSilvestre::~ReptelSilvestre() {}