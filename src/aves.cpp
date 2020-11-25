#include "aves.hpp"
#include <iostream>

Aves::Aves() {}
Aves::Aves(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, string corDasPenas, double tamanhoDoBico, double tamanhoDasPenas): 
      Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao), corDasPenas(corDasPenas), tamanhoDoBico(tamanhoDoBico), tamanhoDasPenas(tamanhoDasPenas) {}
Aves::~Aves() {}

void Aves::voar(){
    cout << "Ave voando!" << endl;
}

string Aves::getCorDasPenas() const{
    return this->corDasPenas;
}

void Aves::setCorDasPenas(string corDasPenas){
    this->corDasPenas = corDasPenas;
}

double Aves::getTamanhoDoBico() const{
    return this->tamanhoDoBico;
}

void Aves::setTamanhoDoBico(double tamanhoDoBico){
    this->tamanhoDoBico = tamanhoDoBico;
}

double Aves::getTamanhoDasPenas() const{
    return this->tamanhoDasPenas;
}

void Aves::setTamanhoDasPenas(double tamanhoDasPenas){
    this->tamanhoDasPenas = tamanhoDasPenas;
}