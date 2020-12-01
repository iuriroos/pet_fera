#include "mamifero.hpp"
#include <iostream>

Mamifero::Mamifero() {}

Mamifero::Mamifero(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, string habitat, Tipo tipo, int quantidadeDeDentes, bool temAsas):
           Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador), habitat(habitat), tipo(tipo), quantidadeDeDentes(quantidadeDeDentes), temAsas(temAsas) {}

Mamifero::~Mamifero() {}

string Mamifero::getHabitat() const{
    return this->habitat;
}

void Mamifero::setHabitat(string habitat){
    this->habitat = habitat;
}

Tipo Mamifero::getTipo() const{
    return this->tipo;
}

void Mamifero::setTipo(Tipo tipo){
    this->tipo = tipo;
}

int Mamifero::getQuantidadeDeDentes() const{
    return this->quantidadeDeDentes;
}

void Mamifero::setQuantidadeDeDentes(int quantidadeDeDentes){
    this->quantidadeDeDentes = quantidadeDeDentes;
}

bool Mamifero::getTemAsas() const{
    return this->temAsas;
}

void Mamifero::setTemAsas(bool temAsas){
    this->temAsas = temAsas;
}

ostream& operator<< (ostream& o, Mamifero* const m) {
	string TipoMamifero = "Cursorial", temAsas = "não";

    if (m->getTemAsas()) temAsas = "sim";

    o <<
		"Especies: " << m->getEspecie() << endl <<
		"Cor: " << m->getCor() << endl <<
		"Preço: " << m->getPreco() << endl <<
		"Tipo de Alimentação: " << m->getTipoDeAlimentacao() << endl <<
        "Habitat: " << m->getHabitat() << endl <<
        "Tipo: " << TipoMamifero << endl <<
        "Quantidade de Dentes: " << m->getQuantidadeDeDentes() << endl <<
        "Tem Asas: " << temAsas;

	return o;
}
