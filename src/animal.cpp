#include "animal.hpp"

Animal::Animal() {}

Animal::Animal(string especie, int tamanho, string cor, double preco, string tipoDeAlimentacao)
    : especie(especie), tamanho(tamanho), cor(cor), preco(preco), tipoDeAlimentacao(tipoDeAlimentacao) {}

Animal::~Animal() {}

string Animal::getEspecie() const {
    return this->especie;
}

void Animal::setEspecie(string especie) {
    this->especie = especie; 
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