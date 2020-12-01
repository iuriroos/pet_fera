#pragma once
#include <string>
#include "silvestre.hpp"
#include "mamifero.hpp"

using namespace std;

class MamiferoSilvestre : public Mamifero, public Silvestre
{    
public:
    MamiferoSilvestre();
    MamiferoSilvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, string habitat, Tipo tipo, int quantidadeDeDentes, bool temAsas);
    ~MamiferoSilvestre();

    friend ostream& operator<< (ostream& o, MamiferoSilvestre* const ms);
    
};