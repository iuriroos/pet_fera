#pragma once

#include <string>
#include <iostream>

using namespace std;

enum Sexo {
    Femea,
    Macho
};

class Animal {
public:
    Animal();
    Animal(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao);
    ~Animal();

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

    friend ostream& operator<< (ostream& o, Animal* const a);
protected:
    string especie;
    Sexo sexo;
    int tamanho;
    string cor;
    double preco;
    string tipoDeAlimentacao;
};