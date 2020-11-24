#include "animal.hpp"

Animal::Animal() {}

Animal::Animal(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, bool ameacadoDeExtincao)
    : especie(especie), sexo(sexo), tamanho(tamanho), cor(cor), preco(preco), tipoDeAlimentacao(tipoDeAlimentacao), ameacadoDeExtincao(ameacadoDeExtincao) {}

Animal::~Animal() {}

string Animal::getEspecie() const {
    return this->especie;
}

void Animal::setEspecie(string especie) {
    this->especie = especie; 
}

Sexo Animal::getSexo() const {
    return this->sexo;
}

void Animal::setSexo(Sexo sexo) {
    this->sexo = sexo;
}

int Animal::getTamanho() const {
    return this->tamanho;
}

void Animal::setTamanho(int tamanho) {
    this->tamanho = tamanho;
}
    
string Animal::getCor() const {
    return this->cor;
}

void Animal::setCor(string cor) {
    this->cor = cor;
}

double Animal::getPreco() const {
    return this->preco;
}

void Animal::setPreco(double preco) {
    this->preco = preco;
}
    
string Animal::getTipoDeAlimentacao() const {
    return tipoDeAlimentacao;
}

void Animal::setTipoDeAlimentacao(string tipoDeAlimentacao) {
    this->tipoDeAlimentacao = tipoDeAlimentacao; 
}

bool Animal::getAmeacadoDeExtincao() const {
    return this->ameacadoDeExtincao;
}

void Animal::setAmeacadoDeExtincao(bool ameacadoDeExtincao) {
    this->ameacadoDeExtincao = ameacadoDeExtincao;
}