#pragma once

#include <cassert>
#include <string>

using namespace std;

class Funcionario {
public:
	Funcionario();
	Funcionario(string nome, string cpf, string matricula, double salario, string nascimento);
	~Funcionario();
	string getNome() const;
	string getCpf() const;
	string getMatricula() const;
	double getSalario() const;
	string getNascimento() const;
	void setNome(string nome);
	void setCpf(string cpf);
	void setMatricula(string matricula);
	void setSalario(double salario);
	void setNascimento(string nascimento);
protected:
	string nome;
	string cpf;
	string matricula;
	double salario;
	string nascimento; // Vamos precisar de uma classe date?
};