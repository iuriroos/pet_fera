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