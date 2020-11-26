#include "anfibios.hpp"
#include <iostream>

Anfibios::Anfibios() {}
Anfibios::Anfibios(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, string corDaPele, bool venenoso, bool temPernas):
          Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador), corDaPele(corDaPele), venenoso(venenoso), temPernas(temPernas) {}
Anfibios::~Anfibios() {}

void Anfibios::nadar(){
    cout << this->especie << " está nadando!" << endl;
}

void Anfibios::saltar(){
    if (this->temPernas){
        cout << this->especie << " está saltando!" << endl;
    }else{
        cout << this->especie << " nãao consegue saltar!" << endl;
    }
}

string Anfibios::getCordaPele() const{
    return this->corDaPele;
}

void Anfibios::setCorDaPele(string corDaPele){
    this->corDaPele = corDaPele;
}

bool Anfibios::getVenenoso() const{
    return this->venenoso;
}

void Anfibios::setVenenoso(bool venenoso){
    this->venenoso = venenoso;
}

bool Anfibios::getTemPernas() const{
    return this->temPernas;
}

void Anfibios::setTemPernas(bool temPernas){
    this->temPernas = temPernas;
}