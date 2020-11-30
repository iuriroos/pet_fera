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

    void cabecalho(string mensagem);
    void cadastrarFuncionario();
    bool listarTodosFuncionarios();
    bool removerFuncionario(string nome);
    bool alterarFuncionario(string nome);
    bool listarFuncionario(string nome);

    bool cadastrarAnimal();
    void removerAnimal(string nome);
    void atualizarAnimal(string nome);
    void dadosAnimal(string nome);
    void listarAnimaisPorFuncionario(string nomeFuncionario);
    void dadosDeUmaClasseAnimal(string nome);

    vector<Veterinario*> veterinarios;
	vector<Tratador*> tratadores;
	vector<Animal*> animais;
};