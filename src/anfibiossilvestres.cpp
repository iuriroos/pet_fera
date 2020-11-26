#include "anfibiossilvestres.hpp"
#include <iostream>

AnfibiosSilvestres::AnfibiosSilvestres() {}
AnfibiosSilvestres::AnfibiosSilvestres(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, string corDaPele, bool venenoso, bool temPernas)
    : Anfibios(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, corDaPele, venenoso, temPernas),
        Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, tipoSilvestre, origem, ameacadoDeExtincao) {}
AnfibiosSilvestres::~AnfibiosSilvestres() {}