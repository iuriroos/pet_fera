#include "mamiferos.hpp"
#include <iostream>

Mamiferos::Mamiferos() {}
Mamiferos::Mamiferos(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, string habitat, Tipo tipo, string corDosPelos, int quantidadeDeDentes, bool temAsas):
           Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao), habitat(habitat), tipo(tipo), corDosPelos(corDosPelos), quantidadeDeDentes(quantidadeDeDentes), temAsas(temAsas) {}
Mamiferos::~Mamiferos() {}

void Mamiferos::voar(){
    if (this->tipo == Voador && this->temAsas){
        cout << this->especie << " está voando!" << endl;
    }else if (this->tipo == Voador && this->temAsas == false){
        cout << this->especie << " está planando!" << endl;
    }else{
        cout << this->especie << " não pode voar!" << endl;
    }  
}

void Mamiferos::cavar(){
    if (this->tipo == Fossorial){
        cout << this->especie << " está cavando!" << endl;
    }else{
        cout << this->especie << " não cava buracos!" << endl;
    }
}

void Mamiferos::correr(){
    if (this->tipo != Aquatico){
        cout << this->especie << " está correndo!" << endl;
    }else{
        cout << this->especie << " não corre!" << endl;
    }
}

void Mamiferos::nadar(){
    if (this->tipo == Aquatico){
        cout << this->especie << " está nadando!" << endl;
    }else{
        cout << this->especie << " não nada!" << endl;
    }
}

void Mamiferos::saltar(){
    if (this->tipo == Saltador || this->tipo == Arboricola){
        cout << this->especie << " está saltando!" << endl;
    }else{
        cout << this->especie << " não salta!" << endl;
    }  
}

string Mamiferos::getHabitat() const{
    return this->habitat;
}

void Mamiferos::setHabitat(string habitat){
    this->habitat = habitat;
}

Tipo Mamiferos::getTipo() const{
    return this->tipo;
}

void Mamiferos::setTipo(Tipo tipo){
    this->tipo = tipo;
}

string Mamiferos::getCorDosPelos() const{
    return this->corDosPelos;
}

void Mamiferos::setCorDosPelos(string corDosPelos){
    this->corDosPelos = corDosPelos;
}

int Mamiferos::getQuantidadeDeDentes() const{
    return this->quantidadeDeDentes;
}

void Mamiferos::setQuantidadeDeDentes(int quantidadeDeDentes){
    this->quantidadeDeDentes = quantidadeDeDentes;
}

bool Mamiferos::getTemAsas() const{
    return this->temAsas;
}

void Mamiferos::setTemAsas(bool temAsas){
    this->temAsas = temAsas;
}