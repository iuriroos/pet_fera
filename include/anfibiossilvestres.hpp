#pragma once
#include <string>
#include "anfibios.hpp"
#include "silvestre.hpp"

using namespace std;

class AnfibiosSilvestres : public virtual Anfibios, public virtual Silvestre{
    
public:
    AnfibiosSilvestres();
    AnfibiosSilvestres(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, string corDaPele, bool venenoso, bool temPernas);
    ~AnfibiosSilvestres();

private:
};