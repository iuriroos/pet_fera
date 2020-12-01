#pragma once

#include <string>
#include <iostream>
#include "veterinario.hpp"
#include "tratador.hpp"

using namespace std;

enum Sexo {
    Femea,
    Macho
};

class Animal {
public:
    Animal();
    Animal(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador);
    virtual ~Animal();

    string getEspecie() const;
    void setEspecie(string especie);

    Sexo getSexo() const;
    void setSexo(Sexo sexo);

    int getTamanho() const;
    void setTamanho(int tamanho);
    
    string getCor() const;
    void setCor(string cor);
    
    double getPreco() const;
    void setPreco(double preco);
    
    string getTipoDeAlimentacao() const;
    void setTipoDeAlimentacao(string tipoDeAlimentacao);

    Veterinario* getVeterinario();
    void setVeterinario(Veterinario* novo);

    Tratador* getTratador();
    void setTratador(Tratador* novo);

    friend ostream& operator<< (ostream& o, Animal* const a);
    
protected:
    string especie;
    Sexo sexo;
    int tamanho;
    string cor;
    double preco;
    string tipoDeAlimentacao;
    Veterinario* veterinario;
    Tratador* tratador;
};