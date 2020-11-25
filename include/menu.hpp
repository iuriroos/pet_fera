#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"

using namespace std;

int menuPetFera(vector<Veterinario*> veterinarios, vector<Tratador*> tratadores);
void cadastrarFuncionario(vector<Veterinario*> &veterinarios, vector<Tratador*> &tratadores);
bool listarTodosFuncionarios(vector<Veterinario*> veterinarios, vector<Tratador*> tratadores);
bool removerFuncionario(string nome, vector<Veterinario*> &veterinarios, vector<Tratador*> &tratadores);
bool alterarFuncionario(string nome, vector<Veterinario*>& veterinarios, vector<Tratador*>& tratadores);
bool listarFuncionario(string nome, vector<Veterinario*>& veterinarios, vector<Tratador*>& tratadores);