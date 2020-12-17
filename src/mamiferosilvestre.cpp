#include <iostream>
#include "mamiferosilvestre.hpp"

MamiferoSilvestre::MamiferoSilvestre() {}

MamiferoSilvestre::MamiferoSilvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, string habitat, Tipo tipo, int quantidadeDeDentes, bool temAsas)
    :   Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador),   
        Mamifero(especie,  sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, habitat, tipo, quantidadeDeDentes, temAsas),
        Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, tipoSilvestre, origem, ameacadoDeExtincao) {}

MamiferoSilvestre::~MamiferoSilvestre() {}


// ostream& operator<< (ostream& o, MamiferoSilvestre* const ms) {
// 	string TipoMamifero = "Cursorial", temAsas = "não", nativoOrExotico = "Exotico", ameacado = "não";

//     if (ms->getTemAsas()) temAsas = "sim";
//     if(ms->getTipoSilvestre() == ETipoSilvestre::Nativo) nativoOrExotico = "Nativo";
//     if(ms->getAmeacadoDeExtincao()) ameacado = "sim";

//     o <<
// 		"Especies: " << ms->getEspecie() << endl <<
// 		"Cor: " << ms->getCor() << endl <<
// 		"Preço: " << ms->getPreco() << endl <<
// 		"Tipo de Alimentação: " << ms->getTipoDeAlimentacao() <<
//         "Habitat: " << ms->getHabitat() << endl <<
//         "Tipo: " << TipoMamifero << endl <<
//         "Quantidade de Dentes: " << ms->getQuantidadeDeDentes() << endl <<
//         "Tem Asas: " << temAsas << endl <<
//         "Tipo silvestres: " << nativoOrExotico << endl <<
//         "Origem: " << ms->getOrigem() << endl <<
//         "Ameaçado de extinção: " << ameacado;

// 	return o;
// }

ostream& operator<< (ostream& o, MamiferoSilvestre* const ms) {
	string TipoMamifero = "Cursorial", temAsas = "não", nativoOrExotico = "Exotico", ameacado = "não";

    if (ms->getTemAsas()) temAsas = "sim";
    if(ms->getTipoSilvestre() == ETipoSilvestre::Nativo) nativoOrExotico = "Nativo";
    if(ms->getAmeacadoDeExtincao()) ameacado = "sim";

    o
        << ms->getEspecie() << ";"
		<< ms->getCor() << ";"
		<< ms->getPreco() << ";"
		<< ms->getTipoDeAlimentacao() << ";"
        << ms->getHabitat() << ";"
        << TipoMamifero << ";"
        << ms->getQuantidadeDeDentes() << ";"
        << temAsas << ";"
        << nativoOrExotico << ";"
        << ms->getOrigem() << ";"
        << ameacado;

	return o;
}