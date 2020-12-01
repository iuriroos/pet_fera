#pragma once
#include "animal.hpp"
#include <string>

using namespace std;

enum class ETipoSilvestre {
    Nativo,
    Exotico
};

class Silvestre : public virtual Animal {
public:
    Silvestre();
    Silvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao);
    virtual ~Silvestre();

    ETipoSilvestre getTipoSilvestre() const;
    void setTipoSilvestre(ETipoSilvestre tipoSilvestre);

    string getOrigem();
    void setOrigem(string origem);

    bool getAmeacadoDeExtincao() const;
    void setAmeacadoDeExtincao(bool ameacadoDeExtincao);

    friend ostream& operator<< (ostream& o, Animal* const a);

protected:
    ETipoSilvestre tipoSilvestre;
    string origem;
    bool ameacadoDeExtincao;
};