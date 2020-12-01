#pragma once
#include <string>
#include "animal.hpp"

using namespace std;

class Anfibio : public virtual Animal{
    
public:
    Anfibio();
    Anfibio(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, bool venenoso, bool temPernas);
    virtual ~Anfibio();

    bool getEVenenoso() const;
    void setEVenenoso(bool venenoso);

    bool getTemPernas() const;
    void setTemPernas(bool temPernas);

    friend ostream& operator<< (ostream& o, Anfibio* const a);

private:
    bool eVenenoso;
    bool temPernas;
};