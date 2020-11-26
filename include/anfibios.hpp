#pragma once
#include <string>
#include "animal.hpp"

using namespace std;

class Anfibios : public virtual Animal{
    
public:
    Anfibios();
    Anfibios(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, string corDaPele, bool venenoso, bool temPernas);
    ~Anfibios();

    void saltar();
    void nadar();

    string getCordaPele() const;
    void setCorDaPele(string corDaPele);

    bool getVenenoso() const;
    void setVenenoso(bool venenoso);

    bool getTemPernas() const;
    void setTemPernas(bool temPernas);

private:
    string corDaPele;
    bool venenoso;
    bool temPernas;
};