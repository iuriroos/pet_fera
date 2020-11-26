#include <iostream>
#include "avessilvestres.hpp"

AvesSilvestres::AvesSilvestres() {}
AvesSilvestres::AvesSilvestres(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, ETipoSilvestre tipoSilvestre, string origem, string corDasPenas, double tamanhoDoBico, double tamanhoDasPenas)
    : Aves(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, corDasPenas, tamanhoDoBico, tamanhoDasPenas),
      Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, tipoSilvestre, origem, ameacadoDeExtincao) {}
AvesSilvestres::~AvesSilvestres() {}