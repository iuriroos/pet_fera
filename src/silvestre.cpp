#include "silvestre.hpp"

Silvestre::Silvestre() {}

Silvestre::Silvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, bool ameacadoDeExtincao)
    : Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao), ameacadoDeExtincao(ameacadoDeExtincao) {}

Silvestre::~Silvestre() {}

bool Silvestre::getAmeacadoDeExtincao() const {
    return this->ameacadoDeExtincao;
}

void Silvestre::setAmeacadoDeExtincao(bool ameacadoDeExtincao) {
    this->ameacadoDeExtincao = ameacadoDeExtincao;
}