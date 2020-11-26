#pragma once
#include <string>
#include "animal.hpp"

using namespace std;

class Aves : public virtual Animal {  
public:
    Aves();
    Aves(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, string corDasPenas, double tamanhoDoBico, double tamanhoDasPenas);
    ~Aves();

    void voar();

    string getCorDasPenas() const;
    void setCorDasPenas(string corDasPenas);

    double getTamanhoDoBico() const;
    void setTamanhoDoBico(double tamanhoDoBico);

    double getTamanhoDasPenas() const;
    void setTamanhoDasPenas(double tamanhoDasPenas);

    friend ostream& operator<< (ostream& o, Animal* const a);
    
protected:
    string corDasPenas;
    double tamanhoDoBico;
    double tamanhoDasPenas;
};