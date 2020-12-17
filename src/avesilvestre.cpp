#include <iostream>
#include "avesilvestre.hpp"

AveSilvestre::AveSilvestre() {}

AveSilvestre::AveSilvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, double tamanhoDoBico, double tamanhoDasPenas)
    : Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador),  
      Ave(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, tamanhoDoBico, tamanhoDasPenas),
      Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, tipoSilvestre, origem, ameacadoDeExtincao) {}

AveSilvestre::~AveSilvestre() {}

// ostream& operator<< (ostream& o, AveSilvestre* const as) {
// 	string nativoOrExotico = "Exotico", ameacado = "não";

//     if(as->getTipoSilvestre() == ETipoSilvestre::Nativo) nativoOrExotico = "Nativo";
//     if(as->getAmeacadoDeExtincao()) ameacado = "sim";

// 	o <<
// 		"Especies: " << as->getEspecie() << endl <<
// 		"Cor: " << as->getCor() << endl <<
// 		"Preço: " << as->getPreco() << endl <<
// 		"Tipo de Alimentação: " << as->getTipoDeAlimentacao() << endl <<
// 		"tamanho do bico: " << as->getTamanhoDoBico() << endl <<
// 		"Tamanho das pernas: " << as->getTamanhoDasPenas() << endl <<
// 		"Tipo silvestres: " << nativoOrExotico << endl <<
//         "Origem: " << as->getOrigem() << endl <<
//         "Ameaçado de extinção: " << ameacado;

// 	return o;
// }

ostream& operator<< (ostream& o, AveSilvestre* const as) {
	string nativoOrExotico = "Exotico", ameacado = "não";

    if(as->getTipoSilvestre() == ETipoSilvestre::Nativo) nativoOrExotico = "Nativo";
    if(as->getAmeacadoDeExtincao()) ameacado = "sim";

	o 
		<< as->getEspecie() << ";"
		<< as->getCor() << ";"
		<< as->getPreco() << ";"
		<< as->getTipoDeAlimentacao() << ";"
		<< as->getTamanhoDoBico() << ";"
		<< as->getTamanhoDasPenas() << ";"
		<< nativoOrExotico << ";"
        << as->getOrigem() << ";"
        << ameacado << ";";

	return o;
}