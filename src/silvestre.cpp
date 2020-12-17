#include "silvestre.hpp"

Silvestre::Silvestre() {}

Silvestre::Silvestre(string especie, Sexo sexo, int tamanho, string cor, double preco, string tipoDeAlimentacao, Veterinario* veterinario, Tratador* tratador, ETipoSilvestre tipoSilvestre, string origem, bool ameacadoDeExtincao)
    : Animal(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinario, tratador), tipoSilvestre(tipoSilvestre), origem(origem), ameacadoDeExtincao(ameacadoDeExtincao) {}

Silvestre::~Silvestre() {}

ETipoSilvestre Silvestre::getTipoSilvestre() const {
    return this->tipoSilvestre;
}

void Silvestre::setTipoSilvestre(ETipoSilvestre tipoSilvestre) {
    this->tipoSilvestre = tipoSilvestre;
}

string Silvestre::getOrigem() {
    return this->origem;
}

void Silvestre::setOrigem(string origem) {
    this->origem = origem;
}

bool Silvestre::getAmeacadoDeExtincao() const {
    return this->ameacadoDeExtincao;
}

void Silvestre::setAmeacadoDeExtincao(bool ameacadoDeExtincao) {
    this->ameacadoDeExtincao = ameacadoDeExtincao;
}

// ostream& operator<< (ostream& o, Silvestre* const s) {
// 	string nativoOrExotico = "Exotico", ameacado = "não";

//     if(s->getTipoSilvestre() == ETipoSilvestre::Nativo) nativoOrExotico = "Nativo";
//     if(s->getAmeacadoDeExtincao()) ameacado = "sim";

//     o <<
// 		"Especies: " << s->getEspecie() << endl <<
// 		"Cor: " << s->getCor() << endl <<
// 		"Preço: " << s->getPreco() << endl <<
// 		"Tipo de Alimentação: " << s->getTipoDeAlimentacao() <<
//         "Tipo silvestres: " << nativoOrExotico <<
//         "Origem: " << s->getOrigem() << 
//         "Ameaçado de extinção: " << ameacado;

// 	return o;
// }

ostream& operator<< (ostream& o, Silvestre* const s) {
	string nativoOrExotico = "Exotico", ameacado = "não";

    if(s->getTipoSilvestre() == ETipoSilvestre::Nativo) nativoOrExotico = "Nativo";
    if(s->getAmeacadoDeExtincao()) ameacado = "sim";

    o
		<< s->getEspecie() << ";"
		<< s->getCor() << ";"
		<< s->getPreco() << ";"
		<< s->getTipoDeAlimentacao() << ";"
        << nativoOrExotico << ";"
        << s->getOrigem() << ";"
        << ameacado;

	return o;
}