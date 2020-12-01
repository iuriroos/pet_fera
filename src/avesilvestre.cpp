#include <iostream>
#include "avesilvestre.hpp"

AveSilvestre::AveSilvestre() {}

AveSilvestre::AveSilvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, double tamanhoDoBico, double tamanhoDasPenas)
    : Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador),  
      Ave(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, tamanhoDoBico, tamanhoDasPenas),
      Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, tipoSilvestre, origem, ameacadoDeExtincao) {}

AveSilvestre::~AveSilvestre() {}

ostream& operator<< (ostream& o, AveSilvestre* const a) {
	o <<
		"Especies: " << a->getEspecie() << endl <<
		"Cor: " << a->getCor() << endl <<
		"Preço: " << a->getPreco() << endl <<
		"Tipo de Alimentação: " << a->getTipoDeAlimentacao() <<
		"tamanho do bico: " << a->getTamanhoDoBico() <<
		"Tamanho das pernas: " << a->getTamanhoDasPenas();

	return o;
}