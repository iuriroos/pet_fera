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
	friend ostream& operator<< (ostream& o, Veterinario* const v);
private:
	string crmv;
};