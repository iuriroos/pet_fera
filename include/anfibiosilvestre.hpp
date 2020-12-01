#pragma once
#include <string>
#include "anfibio.hpp"
#include "silvestre.hpp"

using namespace std;

class AnfibioSilvestre : public Anfibio, public Silvestre{
public:
    AnfibioSilvestre();
    AnfibioSilvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, bool eVenenoso, bool temPernas);
    ~AnfibioSilvestre();
};