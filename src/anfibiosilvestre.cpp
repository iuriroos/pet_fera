#include "anfibiosilvestre.hpp"
#include <iostream>

AnfibioSilvestre::AnfibioSilvestre() {}

AnfibioSilvestre::AnfibioSilvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, bool eVenenoso, bool temPernas)
    :   Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador),
        Anfibio(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, eVenenoso, temPernas),
        Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, tipoSilvestre, origem, ameacadoDeExtincao) {}

AnfibioSilvestre::~AnfibioSilvestre() {}

// ostream& operator<< (ostream& o, AnfibioSilvestre* const as) {
//     string venenoso = "não", temPernas = "não", nativoOrExotico = "Exotico",  ameacado = "não";
    
//     if (as->getEVenenoso()) venenoso = "sim";
//     if (as->getTemPernas()) temPernas = "sim";
//     if(as->getTipoSilvestre() == ETipoSilvestre::Nativo) nativoOrExotico = "Nativo";
//     if(as->getAmeacadoDeExtincao()) ameacado = "sim";

//     o <<
// 		"Especies: " << as->getEspecie() << endl <<
// 		"Cor: " << as->getCor() << endl <<
// 		"Preço: " << as->getPreco() << endl <<
// 		"Tipo de Alimentação: " << as->getTipoDeAlimentacao() << endl << 
//         "É venenoso: " << venenoso << endl <<
//         "Tem penas: " << temPernas << endl <<
//         "Tipo silvestres: " << nativoOrExotico << endl << 
//         "Origem: " << as->getOrigem() << endl <<
//         "Ameaçado de extinção: " << ameacado;

// 	return o;
// }

ostream& operator<< (ostream& o, AnfibioSilvestre* const as) {
    string venenoso = "não", temPernas = "não", nativoOrExotico = "Exotico",  ameacado = "não";
    
    if (as->getEVenenoso()) venenoso = "sim";
    if (as->getTemPernas()) temPernas = "sim";
    if(as->getTipoSilvestre() == ETipoSilvestre::Nativo) nativoOrExotico = "Nativo";
    if(as->getAmeacadoDeExtincao()) ameacado = "sim";

    o
		<< as->getEspecie() << ";"
		<< as->getCor() << ";"
		<< as->getPreco() << ";" 
		<< as->getTipoDeAlimentacao() << ";" 
        << venenoso << ";"
        << temPernas << ";"
        << nativoOrExotico << ";" 
        << as->getOrigem() << ";"
        << ameacado << ";";

	return o;
}