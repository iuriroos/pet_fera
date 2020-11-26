#include "repteis.hpp"
#include <iostream>

Repteis::Repteis() {}
Repteis::Repteis(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, bool temPernas, bool temNadadeiras, bool venenoso, bool peconhento, bool poeOvos, bool temCarapaca, bool consegueNadar):
         Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador), temPernas(temPernas), temNadadeiras(temNadadeiras), venenoso(venenoso), peconhento(peconhento), poeOvos(poeOvos), temCarapaca(temCarapaca), consegueNadar(consegueNadar) {}
Repteis::~Repteis() {}

void Repteis::nadar(){
    if (this->consegueNadar){
        cout << this->especie << " está nadando!" << endl; 
    }else{
        cout << this->especie << " não consegue nadar!" << endl;
    }
}

void Repteis::andar(){
    if (this->temPernas){
        cout << this->especie << " está andando!" << endl; 
    }else{
        cout << this->especie << " não consegue andar, só rastejar!" << endl;
    }
}

void Repteis::escalar(){
    if (this->especie == "lagarto"){
        cout << this->especie << " está escalando!" << endl; 
    }else{
        cout << this->especie << " não consegue escalar!" << endl;
    }
}

bool Repteis::getTemPernas() const{
    return this->temPernas;
}

void Repteis::setTemPernas(bool temPernas){
    this->temPernas = temPernas;
}

bool Repteis::getTemNadadeiras() const{
    return this->temNadadeiras;
}

void Repteis::setTemNadadeiras(bool temNadadeiras){
    this->temNadadeiras = temNadadeiras;
}

bool Repteis::getVenenoso() const{
    return this->venenoso;
}

void Repteis::setVenenoso(bool venenoso){
    this->venenoso = venenoso;
}

bool Repteis::getPeconhento() const{
    return this->peconhento;
}

void Repteis::setPeconhento(bool peconhento){
    this->peconhento = peconhento;
}

bool Repteis::getPoeOvos() const{
    return this->poeOvos;
}

void Repteis::setPoeOvos(bool poeOvos){
    this->poeOvos = poeOvos;
}

bool Repteis::getTemCarapaca() const{
    return this->temCarapaca;
}

void Repteis::setTemCarapaca(bool temCarapaca){
    this->temCarapaca = temCarapaca;
}

bool Repteis::getConsegueNadar() const{
    return this->consegueNadar;
}

void Repteis::setConsegueNadar(bool consegueNadar){
    this->consegueNadar = consegueNadar;
}