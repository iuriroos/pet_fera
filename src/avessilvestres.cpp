#include <iostream>
#include "avessilvestres.hpp"

AvesSilvestres::AvesSilvestres() {}

AvesSilvestres::AvesSilvestres(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, string corDasPenas, double tamanhoDoBico, double tamanhoDasPenas)
    : Aves(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, corDasPenas, tamanhoDoBico, tamanhoDasPenas),
      Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, tipoSilvestre, origem, ameacadoDeExtincao) {}

AvesSilvestres::~AvesSilvestres() {}