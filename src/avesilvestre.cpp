#include <iostream>
#include "avesilvestre.hpp"

AveSilvestre::AveSilvestre() {}

AveSilvestre::AveSilvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, double tamanhoDoBico, double tamanhoDasPenas)
    : Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador),  
      Ave(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, tamanhoDoBico, tamanhoDasPenas),
      Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, tipoSilvestre, origem, ameacadoDeExtincao) {}

AveSilvestre::~AveSilvestre() {}