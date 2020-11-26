#pragma once
#include <string>
#include "animal.hpp"

using namespace std;

class Repteis : public virtual Animal{
    
public:
    Repteis();
    Repteis(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, bool temPernas, bool temNadadeiras, bool venenoso, bool peconhento, bool poeOvos, bool temCarapaca, bool consegueNadar);
    ~Repteis();

    void nadar();
    void andar();
    void escalar();

    bool getTemPernas() const;
    void setTemPernas(bool temPernas);

    bool getTemNadadeiras() const;
    void setTemNadadeiras(bool temNadadeiras);

    bool getVenenoso() const;
    void setVenenoso(bool venenoso);

    bool getPeconhento() const;
    void setPeconhento(bool peconhento);

    bool getPoeOvos() const;
    void setPoeOvos(bool poeOvos);

    bool getTemCarapaca() const;
    void setTemCarapaca(bool temCarapaca);

    bool getConsegueNadar() const;
    void setConsegueNadar(bool consegueNadar);
    
protected:
    bool temPernas;
    bool temNadadeiras;
    bool venenoso;
    bool peconhento;
    bool poeOvos;
    bool temCarapaca;
    bool consegueNadar;
};