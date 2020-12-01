#include "anfibiosilvestre.hpp"
#include <iostream>

AnfibioSilvestre::AnfibioSilvestre() {}

AnfibioSilvestre::AnfibioSilvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, bool eVenenoso, bool temPernas)
    :   Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador),
        Anfibio(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, eVenenoso, temPernas),
        Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, tipoSilvestre, origem, ameacadoDeExtincao) {}

AnfibioSilvestre::~AnfibioSilvestre() {}