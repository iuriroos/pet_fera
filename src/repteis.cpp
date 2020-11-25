#include "repteis.hpp"
#include <iostream>

Repteis::Repteis() {}
Repteis::Repteis(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, bool temPernas, bool temNadadeiras, bool venenoso, bool peconhento, bool poeOvos, bool temCarapaca, bool consegueNadar):
         Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao), temPernas(temPernas), temNadadeiras(temNadadeiras), venenoso(venenoso), peconhento(peconhento), poeOvos(poeOvos), temCarapaca(temCarapaca), consegueNadar(consegueNadar) {}
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