#include "exotico.hpp"

Exotico::Exotico() {}

Exotico::Exotico(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, bool ameacadoDeExtincao, string origem)
    : Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, ameacadoDeExtincao), origem(origem) {}

Exotico::~Exotico() {}

string Exotico::getOrigem() {
    return this->origem;
}

void Exotico::setOrigem(string origem) {
    this->origem = origem;
}