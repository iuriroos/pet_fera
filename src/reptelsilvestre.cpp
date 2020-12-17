#include <iostream>
#include "reptelsilvestre.hpp"

ReptelSilvestre::ReptelSilvestre() {}

ReptelSilvestre::ReptelSilvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao, bool temPernas, bool temNadadeiras, bool venenoso, bool peconhento, bool poeOvos, bool temCarapaca, bool consegueNadar)
    :   Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador),
        Reptel(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, temPernas, temNadadeiras, venenoso, peconhento, poeOvos, temCarapaca, consegueNadar),
        Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador, tipoSilvestre, origem, ameacadoDeExtincao) {}

ReptelSilvestre::~ReptelSilvestre() {}

// ostream& operator<< (ostream& o, ReptelSilvestre* const rs) {
//     string temPerna = "não", temNadadeira = "não", venenoso = "não", peconhento = "não", poeOvos = "não", temCarapacas = "não", consegueNadar = "não", nativoOrExotico = "Exotico", ameacado = "não"; 

//     if(rs->getTemPernas()) temPerna = "sim";
//     if(rs->getTemNadadeiras()) temNadadeira = "sim";
//     if(rs->getVenenoso()) venenoso = "sim";
//     if(rs->getPeconhento()) peconhento = "sim";
//     if(rs->getPoeOvos()) poeOvos = "sim";
//     if(rs->getTemCarapaca()) temCarapacas = "sim";
//     if(rs->getConsegueNadar()) consegueNadar = "sim";
//     if(rs->getTipoSilvestre() == ETipoSilvestre::Nativo) nativoOrExotico = "Nativo";
//     if(rs->getAmeacadoDeExtincao()) ameacado = "sim";

// 	o <<
// 		"Especies: " << rs->getEspecie() << endl <<
// 		"Cor: " << rs->getCor() << endl <<
// 		"Preço: " << rs->getPreco() << endl <<
// 		"Tipo de Alimentação: " << rs->getTipoDeAlimentacao() << endl <<
//         "Tem pernas: " <<  temPerna << endl <<
//         "Tem nadadeiras: " << temNadadeira << endl <<
//         "É venenoso: " << venenoso << endl <<
//         "É peçonhento: " << peconhento << endl <<
//         "Poe ovos: " << poeOvos << endl <<
//         "tem Carapaças: " << temCarapacas << endl <<
//         "consegue Nadar: " << consegueNadar << endl <<
//         "Tipo silvestres: " << nativoOrExotico << endl <<
//         "Origem: " << rs->getOrigem() << endl <<
//         "Ameaçado de extinção: " << ameacado;

// 	return o;
// }

ostream& operator<< (ostream& o, ReptelSilvestre* const rs) {
    string temPerna = "não", temNadadeira = "não", venenoso = "não", peconhento = "não", poeOvos = "não", temCarapacas = "não", consegueNadar = "não", nativoOrExotico = "Exotico", ameacado = "não"; 

    if(rs->getTemPernas()) temPerna = "sim";
    if(rs->getTemNadadeiras()) temNadadeira = "sim";
    if(rs->getVenenoso()) venenoso = "sim";
    if(rs->getPeconhento()) peconhento = "sim";
    if(rs->getPoeOvos()) poeOvos = "sim";
    if(rs->getTemCarapaca()) temCarapacas = "sim";
    if(rs->getConsegueNadar()) consegueNadar = "sim";
    if(rs->getTipoSilvestre() == ETipoSilvestre::Nativo) nativoOrExotico = "Nativo";
    if(rs->getAmeacadoDeExtincao()) ameacado = "sim";

	o
        << rs->getEspecie() << ";"
		<< rs->getCor() << ";"
		<< rs->getPreco() << ";"
		<< rs->getTipoDeAlimentacao() << ";"
        <<  temPerna << ";"
        << temNadadeira << ";"
        << venenoso << ";"
        << peconhento << ";"
        << poeOvos << ";"
        << temCarapacas << ";"
        << consegueNadar << ";"
        << nativoOrExotico << ";"
        << rs->getOrigem() << ";"
        << ameacado << ";";

	return o;
}