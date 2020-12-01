#pragma once
#include <string>
#include "animal.hpp"

using namespace std;

class Ave : public virtual Animal {  
public:
    Ave();
    Ave(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, double tamanhoDoBico, double tamanhoDasPenas);
    virtual ~Ave();

    double getTamanhoDoBico() const;
    void setTamanhoDoBico(double tamanhoDoBico);

    double getTamanhoDasPenas() const;
    void setTamanhoDasPenas(double tamanhoDasPenas);

    friend ostream& operator<< (ostream& o, Animal* const a);
    
protected:
    double tamanhoDoBico;
    double tamanhoDasPenas;
};