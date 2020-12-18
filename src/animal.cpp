#include "animal.hpp"

Animal::Animal() {}

Animal::Animal(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador)
    : especie(especie), sexo(sexo), tamanho(tamanho), cor(cor), preco(preco), tipoDeAlimentacao(tipoDeAlimentacao), veterinario(veterinario), tratador(tratador) {}

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

Veterinario* Animal::getVeterinario() {
    return this->veterinario;
}

void Animal::setVeterinario(Veterinario* novo) {
    this->veterinario = novo;
}

Tratador* Animal::getTratador() {
    return this->tratador;
}

void Animal::setTratador(Tratador* novo) {
    this->tratador = novo;
}

// ostream& operator<< (ostream& o, Animal* const a) {
// 	o <<
// 		"Especies: " << a->getEspecie() << endl <<
// 		"Cor: " << a->getCor() << endl <<
// 		"Preço: " << a->getPreco() << endl <<
// 		"Tipo de Alimentação: " << a->getTipoDeAlimentacao();

// 	return o;
// }

ostream& operator<< (ostream& o, Animal* const a) {
	o
	    << a->getEspecie() << ";"
		<< a->getCor() << ";"
		<< a->getPreco() << ";"
		<< a->getTipoDeAlimentacao();

	return o;
}