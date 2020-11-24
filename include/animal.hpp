#pragma once

#include <string>

using namespace std;

class Animal {
public:
    Animal();
    Animal(string especie, int tamanho, string cor, double preco, string tipoDeAlimentacao, bool ameacadoDeExtincao);
    ~Animal();

    string getEspecie() const;
    void setEspecie(string especie);

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
    int tamanho;
    string cor;
    double preco;
    string tipoDeAlimentacao;
    bool ameacadoDeExtincao;
};