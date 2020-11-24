#pragma once

#include "funcionario.hpp"

using namespace std;

class Veterinario : public Funcionario {
public:
	Veterinario();
	Veterinario(string nome, string cpf, string matricula, double salario, string nascimento, string crmv);
	~Veterinario();
	string getCrmv() const;
	void setCrmv(string crmv);
private:
	string crmv;
};