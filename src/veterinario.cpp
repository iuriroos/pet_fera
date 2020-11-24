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