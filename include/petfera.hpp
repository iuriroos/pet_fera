#pragma once
#include <vector>
#include <string>
#include <cassert>
#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "animal.hpp"

using namespace std;

class PetFera
{
public:
    PetFera();
    ~PetFera();

    void cadastrarFuncionario();
    bool listarTodosFuncionarios();
    bool removerFuncionario(string nome);
    bool alterarFuncionario(string nome);
    bool listarFuncionario(string nome);

    void cadastrarAnimal();
    void RemoverAnimal(string nome);
    void AtualizarAnimal(string nome);
    void ListarAnimais();
    void ListarAnimaisPorFuncionario(string nomeFuncionario);

private:
    vector<Veterinario*> veterinarios;
	vector<Tratador*> tratadores;
	vector<Animal*> animais;
};