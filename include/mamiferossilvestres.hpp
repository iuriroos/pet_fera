#pragma once
#include <string>
#include "silvestre.hpp"
#include "mamiferos.hpp"

using namespace std;

class MamiferosSilvestres : public Mamiferos, Silvestre
{    
public:
    MamiferosSilvestres();
    MamiferosSilvestres(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, string habitat, Tipo tipo, string corDosPelos, int quantidadeDeDentes, bool temAsas);
    ~MamiferosSilvestres();

private:
};