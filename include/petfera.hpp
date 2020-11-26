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

    bool cadastrarAnimal();
    void RemoverAnimal(string nome);
    void AtualizarAnimal(string nome);
    void ListarAnimais();
    void DadosAnimail(string nome);
    void ListarAnimaisPorFuncionario(string nomeFuncionario);
    void DadosDeUmaClasseAnimal(string nome);

private:
    vector<Veterinario*> veterinarios;
	vector<Tratador*> tratadores;
	vector<Animal*> animais;
};