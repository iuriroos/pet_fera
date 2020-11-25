#pragma once
#include "animal.hpp"
#include <string>

using namespace std;

enum ETipoSilvestre {
    Nativo,
    Exotico
};

class Silvestre : public Animal {
public:
    Silvestre();
    Silvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao);
    ~Silvestre();

    ETipoSilvestre getTipoSilvestre() const;
    void setTipoSilvestre(ETipoSilvestre tipoSilvestre);

    string getOrigem();
    void setOrigem(string origem);

    bool getAmeacadoDeExtincao() const;
    void setAmeacadoDeExtincao(bool ameacadoDeExtincao);

protected:
    ETipoSilvestre tipoSilvestre;
    string origem;
    bool ameacadoDeExtincao;
};