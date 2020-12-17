#include "tratador.hpp"

Tratador::Tratador(): nivel_de_seguranca(Cor::Nenhum) {}
Tratador::Tratador(string nome, string cpf, string matricula, double salario, string nascimento, Cor nivel_de_seguranca): Funcionario(nome, cpf, matricula, salario, nascimento), nivel_de_seguranca(nivel_de_seguranca) {}
Tratador::~Tratador() {}
string Tratador::getNivelDeSeguranca() const {
	if (this->nivel_de_seguranca == Cor::Verde) {
		return "Verde";
	}
	else if (this->nivel_de_seguranca == Cor::Azul) {
		return "Azul";
	}
	else if (this->nivel_de_seguranca == Cor::Vermelho) {
		return "Vermelho";
	}
	else {
		return "Nenhum";
	}
}
void Tratador::setNivelDeSeguranca(Cor nivel_de_seguranca) {
	this->nivel_de_seguranca = nivel_de_seguranca;
}

// ostream& operator<< (ostream& o, Tratador* const t) {
// 	o <<
// 		"Nome: " << t->getNome() << endl <<
// 		"CPF: " << t->getCpf() << endl <<
// 		"Matricula: " << t->getMatricula() << endl <<
// 		"Salario: " << t->getSalario() << endl <<
// 		"Nascimento: " << t->getNascimento() << endl <<
// 		"Nivel de seguranca: " << t->getNivelDeSeguranca() << endl;

// 	return o;
// }

ostream& operator<< (ostream& o, Tratador* const t) {
	o <<
		t->getNome() << ";"
		<< t->getCpf() << ";"
		<< t->getMatricula() << ";"
		<< t->getSalario() << ";"
		<< t->getNascimento() << ";"
		<< t->getNivelDeSeguranca();

	return o;
}