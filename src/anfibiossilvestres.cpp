#include "anfibiossilvestres.hpp"
#include <iostream>

AnfibiosSilvestres::AnfibiosSilvestres() {}
AnfibiosSilvestres::AnfibiosSilvestres(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, string corDaPele, bool venenoso, bool temPernas)
    : Anfibios(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, corDaPele, venenoso, temPernas),
        Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, tipoSilvestre, origem, ameacadoDeExtincao) {}
AnfibiosSilvestres::~AnfibiosSilvestres() {}