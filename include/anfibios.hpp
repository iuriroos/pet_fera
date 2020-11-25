#pragma once
#include <string>
#include "animal.hpp"

using namespace std;

class Anfibios : public Animal{
    
public:
    Anfibios();
    Anfibios(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao);
    ~Anfibios();

private:

};