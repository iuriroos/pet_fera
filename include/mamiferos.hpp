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

class Mamiferos : public Animal{
    
public:
    Mamiferos();
    Mamiferos(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, string habitat, Tipo tipo, string corDosPelos, int quantidadeDeDentes, bool temAsas);
    ~Mamiferos();

    void voar();
    void andar();
    void correr();
    void nadar();
    void saltar();

    string getHabitat() const;
    void setHabitat(string habitat);

    Tipo getTipo() const;
    void setTipo(Tipo tipo);

    string getCorDosPelos() const;
    void setCorDosPelos(string corDosPelos);

    int getQuantidadeDeDentes() const;
    void setQuantidadeDeDentes(int quantidadeDeDentes);

    bool getTemAsas() const;
    void setTemAsas(bool temAsas);

private:
    string habitat;
    Tipo tipo;
    string corDosPelos;
    int quantidadeDeDentes;
    bool temAsas;
};