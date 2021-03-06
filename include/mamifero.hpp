#pragma once
#include <string>
#include "animal.hpp"

using namespace std;

enum Tipo{
    Cursorial,
    Saltador,
    Plantigrado,
    Fossorial,
    Arboricola,
    Voador,
    Aquatico
};

class Mamifero : public virtual Animal
{
public:
    Mamifero();
    Mamifero(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, string habitat, Tipo tipo, int quantidadeDeDentes, bool temAsas);
    virtual ~Mamifero();

    string getHabitat() const;
    void setHabitat(string habitat);

    Tipo getTipo() const;
    void setTipo(Tipo tipo);
    
    int getQuantidadeDeDentes() const;
    void setQuantidadeDeDentes(int quantidadeDeDentes);

    bool getTemAsas() const;
    void setTemAsas(bool temAsas);

    friend ostream& operator<< (ostream& o, Mamifero* const m);

protected:
    string habitat;
    Tipo tipo;
    int quantidadeDeDentes;
    bool temAsas;
};