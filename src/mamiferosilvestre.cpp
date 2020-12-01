#include <iostream>
#include "mamiferosilvestre.hpp"

MamiferoSilvestre::MamiferoSilvestre() {}

MamiferoSilvestre::MamiferoSilvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, string habitat, Tipo tipo, int quantidadeDeDentes, bool temAsas)
    :   Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador),   
        Mamifero(especie,  sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, habitat, tipo, quantidadeDeDentes, temAsas),
        Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, tipoSilvestre, origem, ameacadoDeExtincao) {}

MamiferoSilvestre::~MamiferoSilvestre() {}