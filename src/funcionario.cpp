#include "funcionario.hpp"

Funcionario::Funcionario(): salario(0) {}
Funcionario::Funcionario(string nome, string cpf, string matricula, double salario, string nascimento): nome(nome), cpf(cpf), matricula(matricula), salario(salario), nascimento(nascimento) {}
Funcionario::~Funcionario() {}
string Funcionario::getNome() const {
	return this->nome;
}
string Funcionario::getCpf() const {
	return this->cpf;
}
string Funcionario::getMatricula() const {
	return this->matricula;
}
double Funcionario::getSalario() const {
	return this->salario;
}
string Funcionario::getNascimento() const {
	return this->nascimento;
}
void Funcionario::setNome(string nome) {
	this->nome = nome;
}
void Funcionario::setCpf(string cpf) {
	this->cpf = cpf;
}
void Funcionario::setMatricula(string matricula) {
	this->matricula = matricula;
}
void Funcionario::setSalario(double salario) {
	assert(salario > 0);
	this->salario = salario;
}
void Funcionario::setNascimento(string nascimento) {
	this->nascimento = nascimento;
}