#pragma once

#include <string>

using namespace std;

enum Sexo {
    Femea,
    Macho
};

class Animal {
public:
    Animal();
    Animal(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, bool ameacadoDeExtincao);
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

    bool getAmeacadoDeExtincao() const;
    void setAmeacadoDeExtincao(bool ameacadoDeExtincao);

protected:
    string especie;
    Sexo sexo;
    int tamanho;
    string cor;
    double preco;
    string tipoDeAlimentacao;
    bool ameacadoDeExtincao;
};