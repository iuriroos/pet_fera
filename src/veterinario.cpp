#include "veterinario.hpp"

Veterinario::Veterinario() {}
Veterinario::Veterinario(string nome, string cpf, string matricula, double salario, string nascimento, string crmv): Funcionario(nome, cpf, matricula, salario, nascimento), crmv(crmv) {}
Veterinario::~Veterinario() {}
string Veterinario::getCrmv() const {
	return this->crmv;
}
void Veterinario::setCrmv(string crmv) {
	this->crmv = crmv;
}

// ostream& operator<< (ostream& o, Veterinario* const v) {
// 	o <<
// 		"Nome: " << v->getNome() << endl <<
// 		"CPF: " << v->getCpf() << endl <<
// 		"Matricula: " << v->getMatricula() << endl <<
// 		"Salario: " << v->getSalario() << endl <<
// 		"Nascimento: " << v->getNascimento() << endl << 
// 		"CRMV: " << v->getCrmv() << endl;

// 	return o;
// }

ostream& operator<< (ostream& o, Veterinario* const v) {
	o <<
		v->getNome() << ";"
		<< v->getCpf() << ";"
		<< v->getMatricula() << ";"
		<< v->getSalario() << ";"
		<< v->getNascimento() << ";"
		<< v->getCrmv() << ";";

	return o;
}