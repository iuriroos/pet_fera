#include "silvestre.hpp"

Silvestre::Silvestre() {}

Silvestre::Silvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao)
    : Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador), tipoSilvestre(tipoSilvestre), origem(origem), ameacadoDeExtincao(ameacadoDeExtincao) {}

Silvestre::~Silvestre() {}

ETipoSilvestre Silvestre::getTipoSilvestre() const {
    return this->tipoSilvestre;
}

void Silvestre::setTipoSilvestre(ETipoSilvestre tipoSilvestre) {
    this->tipoSilvestre = tipoSilvestre;
}

string Silvestre::getOrigem() {
    return this->origem;
}

void Silvestre::setOrigem(string origem) {
    this->origem = origem;
}

bool Silvestre::getAmeacadoDeExtincao() const {
    return this->ameacadoDeExtincao;
}

void Silvestre::setAmeacadoDeExtincao(bool ameacadoDeExtincao) {
    this->ameacadoDeExtincao = ameacadoDeExtincao;
}