#include "tratador.hpp"

Tratador::Tratador() {}
Tratador::Tratador(string nome, string cpf, string matricula, double salario, string nascimento, Cor nivel_de_seguranca): Funcionario(nome, cpf, matricula, salario, nascimento), nivel_de_seguranca(nivel_de_seguranca) {}
Tratador::~Tratador() {}
Cor Tratador::getNivelDeSeguranca() const {
	return this->nivel_de_seguranca;
}
void Tratador::setNivelDeSeguranca(Cor nivel_de_seguranca) {
	this->nivel_de_seguranca = nivel_de_seguranca;
}