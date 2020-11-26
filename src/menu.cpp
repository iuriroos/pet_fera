#include "menu.hpp"

int menuPetFera(PetFera* petfera) {
    int op;
    string nome;

    cout << "==============================================================" << endl;
    cout << "                    Bem vindo ao Pet Fera!                    " << endl;
    cout << "==============================================================" << endl;

    do {
        cout << endl << "Menu principal:" << endl << endl;
        cout << "(1)  Cadastrar um novo animal a ser comercializado." << endl;
        cout << "(2)  Comprar animal disponivel." << endl; // Remover o animal da lista
        cout << "(3)  Alterar dados de um animal." << endl;
        cout << "(4)  Listar dados de um determinado animal." << endl;
        cout << "(5)  Listar dados de uma classe de animais." << endl;
        cout << "(6)  Listar animais de um determinado Veterinario ou Tratador." << endl;
        cout << "(7)  Cadastrar um novo funcionario. (Veterinario/Tratador)" << endl;
        cout << "(8)  Alterar dados de um funcionario." << endl;
        cout << "(9)  Remover um funcionario." << endl;
        cout << "(10) Listar dados de um determinado funcionario." << endl;
        cout << "(11) Listar todos os funcionarios." << endl;
        cout << "(12) Sair do programa." << endl;

        cin >> op;

        switch (op) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                petfera->cadastrarFuncionario();
                break;
            case 8:
                cout << "Digite o nome do funcionario a ser alterado: ";
                cin >> nome;

                if (petfera->alterarFuncionario(nome)) {
                    cout << endl << "Alteracao finalizada." << endl;
                }
                else {
                    cout << endl << "Funcionario nao encontrado!" << endl;
                }
                break;
            case 9:
                cout << "Digite o nome do funcionario a ser removido: ";
                cin >> nome;

                if (petfera->removerFuncionario(nome)) {
                    cout << endl << "Funcionario removido com sucesso." << endl;
                }
                else {
                    cout << endl << "Funcionario nao encontrado!" << endl;
                }
                break;
            case 10:
                cout << "Digite o nome do funcionario a ser listado: ";
                cin >> nome;

                if (!petfera->listarFuncionario(nome)) {
                    cout << endl << "Funcionario nao encontrado!" << endl;
                }
                break;
            case 11:
                if (!petfera->listarTodosFuncionarios()) {
                    cout << endl << "Nao existe nenhum funcionario cadastrado!" << endl;
                }
                break;
            case 12:
                return 0;
                break;
            default:
                break;
        }
    } while (op != 12);

    return 0;
}