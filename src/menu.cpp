#include "menu.hpp"
#include <fstream>
#include <sstream>

using std::ifstream;
using std::stringstream;

int menuPetFera(PetFera* petfera) {
    int op;
    string nome;

    cout << "==============================================================" << endl;
    cout << "                    Bem vindo ao Pet Fera!                    " << endl;
    cout << "==============================================================" << endl;

    //Carrega os dados dos animais e funcionários cadastrados
    ifstream arqVeterinarios("veterinarios.dat");
    string linha, palavra;

    if (arqVeterinarios.is_open()){
        while (getline(arqVeterinarios, linha)){
            stringstream s(linha);
            vector<string> tokens;
            while (getline(s, palavra, ';')){
                tokens.push_back(palavra);
            }

            if (tokens.size() == 6){
                petfera->veterinarios.push_back(new Veterinario(tokens.at(0), tokens.at(1), tokens.at(2), stod(tokens.at(3)), tokens.at(4), tokens.at(5)));
            }   
        }
    } 

    ifstream arqTratadores("tratadores.dat");
    Cor nivel_de_seguranca = Cor::Nenhum;

    if (arqTratadores.is_open()){
        while (getline(arqTratadores, linha)){
            stringstream s(linha);
            vector<string> tokens;
            while (getline(s, palavra, ';')){
                tokens.push_back(palavra);
            }

            if (tokens.at(5) == "Verde" || tokens.at(5) == "verde"){
                nivel_de_seguranca = Cor::Verde;
            }
            if (tokens.at(5) == "Azul" || tokens.at(5) == "azul"){
                nivel_de_seguranca = Cor::Azul;
            }
            if (tokens.at(5) == "Vermelho" || tokens.at(5) == "vermelho"){
                nivel_de_seguranca = Cor::Vermelho;
            }
            
            if (tokens.size() == 6){
                petfera->tratadores.push_back(new Tratador(tokens.at(0), tokens.at(1), tokens.at(2), stod(tokens.at(3)), tokens.at(4), nivel_de_seguranca));
            }   
        }
    } 

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
                if (petfera->cadastrarAnimal()) {
                    cout << endl << "Animal cadastrado com sucesso." << endl;
                }
                else {
                    while (petfera->veterinarios.size() < 1 || petfera->tratadores.size() < 1){
                        cout << endl << "Cadastre pelo menos um veterinário e um tratador para poder cadastrar um animal." << endl;
                        petfera->cadastrarFuncionario();
                    } 

                    if (petfera->veterinarios.size() >= 1 && petfera->tratadores.size() >= 1){
                        cout << "\nAgora é possível cadastrar um animal. Para tal, escolha a opção (1) do menu." << endl;
                    }
                }
                break;
            case 2:
                petfera->cabecalho("Comprar animal!");
                cout << "Digite o nome do animal a ser comprado: ";
                cin >> nome;
                petfera->removerAnimal(nome);
                break;
            case 3:
                petfera->cabecalho("Atualizar animal!");
                cout << "Digite o nome do animal a ser alterado: ";
                cin >> nome;

                petfera->atualizarAnimal(nome);
                break;
            case 4:
                petfera->cabecalho("Listar dados de um animal!");
                cout << "Digite o nome do animal para ver os dados: ";
                cin >> nome;
                
                petfera->dadosAnimal(nome);
                break;
            case 5:
                petfera->cabecalho("Listar dados de uma classe de animais!");
                cout << "Digite a opcao de classe animal para ver os dados (1) Ave, (2) Anfibio, (3) Mamifero, (4) Reptil: ";
                cin >> nome;
                
                petfera->dadosDeUmaClasseAnimal(nome);
                break;
            case 6:
                petfera->cabecalho("Listar animais por funcionário!");
                cout << "Digite o nome do funcionario para ver os animais: ";
                cin >> nome;

                petfera->listarAnimaisPorFuncionario(nome);
                break;
            case 7:
                petfera->cadastrarFuncionario();
                break;
            case 8:
                petfera->cabecalho("Alerar dados de um funcionário!");
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
                petfera->cabecalho("Remover funcionário!");
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
                petfera->cabecalho("Listar dados de um funcionário!");
                cout << "Digite o nome do funcionario a ser listado: ";
                cin >> nome;

                if (!petfera->listarFuncionario(nome)) {
                    cout << endl << "Funcionario nao encontrado!" << endl;
                }
                break;
            case 11:
                petfera->cabecalho("Listar todos os funcionários!");
                if (!petfera->listarTodosFuncionarios()) {
                    cout << endl << "Nao existe nenhum funcionario cadastrado!" << endl;
                }
                break;
            case 12:
                petfera->cabecalho("Obrigado pela preferência e volte sempre!");
                return 0;
                break;
            default:
                break;
        }
    } while (op != 12);

    return 0;
}