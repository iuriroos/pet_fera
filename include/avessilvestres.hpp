#pragma once
#include <string>
#include "aves.hpp"
#include "silvestre.hpp"

using namespace std;

class AvesSilvestres : public Aves, Silvestre{  
public:
    AvesSilvestres();
    AvesSilvestres(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, ETipoSilvestre tipoSilvestre, string origem, string corDasPenas, double tamanhoDoBico, double tamanhoDasPenas);
    ~AvesSilvestres();

private:

};