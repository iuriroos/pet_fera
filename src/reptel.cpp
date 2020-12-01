#include <iostream>
#include "reptel.hpp"

Reptel::Reptel() {}
Reptel::Reptel(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, bool temPernas, bool temNadadeiras, bool venenoso, bool peconhento, bool poeOvos, bool temCarapaca, bool consegueNadar):
         Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador), temPernas(temPernas), temNadadeiras(temNadadeiras), venenoso(venenoso), peconhento(peconhento), poeOvos(poeOvos), temCarapaca(temCarapaca), consegueNadar(consegueNadar) {}
Reptel::~Reptel() {}

bool Reptel::getTemPernas() const{
    return this->temPernas;
}

void Reptel::setTemPernas(bool temPernas){
    this->temPernas = temPernas;
}

bool Reptel::getTemNadadeiras() const{
    return this->temNadadeiras;
}

void Reptel::setTemNadadeiras(bool temNadadeiras){
    this->temNadadeiras = temNadadeiras;
}

bool Reptel::getVenenoso() const{
    return this->venenoso;
}

void Reptel::setVenenoso(bool venenoso){
    this->venenoso = venenoso;
}

bool Reptel::getPeconhento() const{
    return this->peconhento;
}

void Reptel::setPeconhento(bool peconhento){
    this->peconhento = peconhento;
}

bool Reptel::getPoeOvos() const{
    return this->poeOvos;
}

void Reptel::setPoeOvos(bool poeOvos){
    this->poeOvos = poeOvos;
}

bool Reptel::getTemCarapaca() const{
    return this->temCarapaca;
}

void Reptel::setTemCarapaca(bool temCarapaca){
    this->temCarapaca = temCarapaca;
}

bool Reptel::getConsegueNadar() const{
    return this->consegueNadar;
}

void Reptel::setConsegueNadar(bool consegueNadar){
    this->consegueNadar = consegueNadar;
}