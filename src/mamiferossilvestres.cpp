#include "mamiferossilvestres.hpp"
#include <iostream>

MamiferosSilvestres::MamiferosSilvestres() {}
MamiferosSilvestres::MamiferosSilvestres(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, string habitat, Tipo tipo, string corDosPelos, int quantidadeDeDentes, bool temAsas)
    : Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, tipoSilvestre, origem, ameacadoDeExtincao),
     Mamiferos(especie,  sexo, tamanho, cor, preco, tipoDeAlimentacao, habitat, tipo, corDosPelos, quantidadeDeDentes, temAsas) {}

MamiferosSilvestres::~MamiferosSilvestres() {}