#include "anfibio.hpp"
#include <iostream>

Anfibio::Anfibio() {}

Anfibio::Anfibio(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, bool eVenenoso, bool temPernas):
          Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador), eVenenoso(eVenenoso), temPernas(temPernas) {}

Anfibio::~Anfibio() {}

bool Anfibio::getEVenenoso() const{
    return this->eVenenoso;
}

void Anfibio::setEVenenoso(bool venenoso){
    this->eVenenoso = venenoso;
}

bool Anfibio::getTemPernas() const{
    return this->temPernas;
}

void Anfibio::setTemPernas(bool temPernas){
    this->temPernas = temPernas;
}

// ostream& operator<< (ostream& o, Anfibio* const a) {
//     string venenoso = "não", temPernas = "não";
    
//     if (a->getEVenenoso()) venenoso = "sim";
//     if (a->getTemPernas()) temPernas = "sim";

// 	o <<
// 		"Especies: " << a->getEspecie() << endl <<
// 		"Cor: " << a->getCor() << endl <<
// 		"Preço: " << a->getPreco() << endl <<
// 		"Tipo de Alimentação: " << a->getTipoDeAlimentacao() <<
//         "É venenoso: " << venenoso <<
//         "Tem penas: " << temPernas;

// 	return o;
// }

ostream& operator<< (ostream& o, Anfibio* const a) {
    string venenoso = "não", temPernas = "não";
    
    if (a->getEVenenoso()) venenoso = "sim";
    if (a->getTemPernas()) temPernas = "sim";

	o
		<< a->getEspecie() << ";"
		<< a->getCor() << ";"
		<< a->getPreco() << ";"
		<< a->getTipoDeAlimentacao() << ";"
        << venenoso << ";"
        << temPernas;

	return o;
}