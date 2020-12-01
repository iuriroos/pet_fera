#include "ave.hpp"
#include <iostream>

Ave::Ave() {}

Ave::Ave(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, double tamanhoDoBico, double tamanhoDasPenas): 
      Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador), tamanhoDoBico(tamanhoDoBico), tamanhoDasPenas(tamanhoDasPenas) {}

Ave::~Ave() {}

double Ave::getTamanhoDoBico() const{
    return this->tamanhoDoBico;
}

void Ave::setTamanhoDoBico(double tamanhoDoBico){
    this->tamanhoDoBico = tamanhoDoBico;
}

double Ave::getTamanhoDasPenas() const{
    return this->tamanhoDasPenas;
}

void Ave::setTamanhoDasPenas(double tamanhoDasPenas){
    this->tamanhoDasPenas = tamanhoDasPenas;
}

ostream& operator<< (ostream& o, Ave* const a) {
	o <<
		"Especies: " << a->getEspecie() << endl <<
		"Cor: " << a->getCor() << endl <<
		"Preço: " << a->getPreco() << endl <<
		"Tipo de Alimentação: " << a->getTipoDeAlimentacao() <<
        "tamanho do bico: " << a->getTamanhoDoBico() <<
        "Tamanho das pernas: " << a->getTamanhoDasPenas();

	return o;
}