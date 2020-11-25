#include "menu.hpp"

int menuPetFera(vector<Veterinario*> veterinarios, vector<Tratador*> tratadores) {
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
                cadastrarFuncionario(veterinarios, tratadores);
                break;
            case 8:
                cout << "Digite o nome do funcionario a ser alterado: ";
                cin >> nome;

                if (alterarFuncionario(nome, veterinarios, tratadores)) {
                    cout << endl << "Alteracao finalizada." << endl;
                }
                else {
                    cout << endl << "Funcionario nao encontrado!" << endl;
                }
                break;
            case 9:
                cout << "Digite o nome do funcionario a ser removido: ";
                cin >> nome;

                if (removerFuncionario(nome, veterinarios, tratadores)) {
                    cout << endl << "Funcionario removido com sucesso." << endl;
                }
                else {
                    cout << endl << "Funcionario nao encontrado!" << endl;
                }
                break;
            case 10:
                cout << "Digite o nome do funcionario a ser listado: ";
                cin >> nome;

                if (!listarFuncionario(nome, veterinarios, tratadores)) {
                    cout << endl << "Funcionario nao encontrado!" << endl;
                }
                break;
            case 11:
                if (!listarTodosFuncionarios(veterinarios, tratadores)) {
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

void cadastrarFuncionario(vector<Veterinario*>& veterinarios, vector<Tratador*>& tratadores) {
    string nome, cpf, matricula, nascimento, crmv, cor;
    Cor nivel_de_seguranca = Cor::Nenhum;
    double salario;
    char escolha;

    // Coleta de dados
    cout << "Nome: ";
    cin >> nome;
    cout << "CPF: ";
    cin >> cpf;
    cout << "Matricula: ";
    cin >> matricula;
    cout << "Salario: ";
    cin >> salario;
    cout << "Data de nascimento: ";
    cin >> nascimento;
    cout << "O funcionario eh um veterinario ou tratador? (V | T) ";
    cin >> escolha;

    assert(escolha == 'V' || escolha == 'v' || escolha == 'T' || escolha == 't');

    // Funcionario eh veterinario
    if (escolha == 'V' || escolha == 'v') {
        cout << "CRMV: ";
        cin >> crmv;

        veterinarios.push_back(new Veterinario(nome, cpf, matricula, salario, nascimento, crmv));
    }
    // Funcionario eh tratador
    else if (escolha == 'T' || escolha == 't') {
        cout << "Nivel de seguranca (Verde | Azul | Vermelho): ";
        cin >> cor;

        assert(cor == "Verde" || cor == "Azul" || cor == "Vermelho" || cor == "verde" || cor == "azul" || cor == "vermelho");

        if (cor == "Verde" || cor == "verde") {
            nivel_de_seguranca = Cor::Verde;
        }
        else if (cor == "Azul" || cor == "azul") {
            nivel_de_seguranca = Cor::Azul;
        }
        else if (cor == "Vermelho" || cor == "vermelho") {
            nivel_de_seguranca = Cor::Vermelho;
        }

        tratadores.push_back(new Tratador(nome, cpf, matricula, salario, nascimento, nivel_de_seguranca));
    }
}

bool listarTodosFuncionarios(vector<Veterinario*> veterinarios, vector<Tratador*> tratadores) {
    // Flag para mensagem em caso de nao existirem funcionarios
    bool existeFuncionarios = false;
    cout << "Veterinarios:" << endl;

    // Percorre todos os veterinarios
    for (auto& veterinario : veterinarios) {
        cout << veterinario << endl;
        existeFuncionarios = true;
    }

    cout << "Tratadores:" << endl;

    // Percorre todos os tratadores
    for (auto& tratador : tratadores) {
        cout << tratador << endl;
        existeFuncionarios = true;
    }

    return existeFuncionarios;
}

bool removerFuncionario(string nome, vector<Veterinario*>& veterinarios, vector<Tratador*>& tratadores) {
    int index = 0;
    auto pos_vet = veterinarios.begin();

    // Procura nome em veterinarios
    for (const auto& veterinario : veterinarios) {
        if (veterinario->getNome() == nome) {
            veterinarios.erase(pos_vet + index);
            return true;
        }
        index++;
    }

    index = 0;
    auto pos_trat = tratadores.begin();

    // Procura nome em tratadores
    for (const auto& tratador : tratadores) {
        if (tratador->getNome() == nome) {
            tratadores.erase(pos_trat + index);
            return true;
        }
        index++;
    }

    return false;
}

bool alterarFuncionario(string nome, vector<Veterinario*>& veterinarios, vector<Tratador*>& tratadores) {
    int index = 0;
    string nomeFuncionario, cpf, matricula, nascimento, crmv, cor;
    Cor nivel_de_seguranca = Cor::Nenhum;
    char escolha;
    double salario = 0;
    auto pos_vet = veterinarios.begin();

    // Update de veterinarios
    for (const auto& veterinario : veterinarios) {
        if (veterinario->getNome() == nome) {
            // Nome
            cout << "Alterar nome? (S | N) ";
            cin >> escolha;
            assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');
            if (escolha == 'S' || escolha == 's') {
                cout << "Novo nome: ";
                cin >> nomeFuncionario;
                veterinario->setNome(nomeFuncionario);
            }

            // CPF
            cout << "Alterar CPF? (S | N) ";
            cin >> escolha;
            assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');
            if (escolha == 'S' || escolha == 's') {
                cout << "Novo CPF: ";
                cin >> cpf;
                veterinario->setCpf(cpf);
            }

            // Matricula
            cout << "Alterar matricula? (S | N) ";
            cin >> escolha;
            assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');
            if (escolha == 'S' || escolha == 's') {
                cout << "Nova matricula: ";
                cin >> matricula;
                veterinario->setMatricula(matricula);
            }

            // Data de nascimento
            cout << "Alterar data de nascimento? (S | N) ";
            cin >> escolha;
            assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');
            if (escolha == 'S' || escolha == 's') {
                cout << "Nova data de nascimento: ";
                cin >> nascimento;
                veterinario->setNascimento(nascimento);
            }

            // CRMV
            cout << "Alterar CRMV? (S | N) ";
            cin >> escolha;
            assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');
            if (escolha == 'S' || escolha == 's') {
                cout << "Novo CRMV: ";
                cin >> crmv;
                veterinario->setCrmv(crmv);
            }

            return true;
        }
        index++;
    }

    index = 0;
    auto pos_trat = tratadores.begin();

    // Update de tratadores
    for (const auto& tratador : tratadores) {
        if (tratador->getNome() == nome) {
            // Nome
            cout << "Alterar nome? (S | N) ";
            cin >> escolha;
            assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');
            if (escolha == 'S' || escolha == 's') {
                cout << "Novo nome: ";
                cin >> nomeFuncionario;
                tratador->setNome(nomeFuncionario);
            }

            // CPF
            cout << "Alterar CPF? (S | N) ";
            cin >> escolha;
            assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');
            if (escolha == 'S' || escolha == 's') {
                cout << "Novo CPF: ";
                cin >> cpf;
                tratador->setCpf(cpf);
            }

            // Matricula
            cout << "Alterar matricula? (S | N) ";
            cin >> escolha;
            assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');
            if (escolha == 'S' || escolha == 's') {
                cout << "Nova matricula: ";
                cin >> matricula;
                tratador->setMatricula(matricula);
            }

            // Data de nascimento
            cout << "Alterar data de nascimento? (S | N) ";
            cin >> escolha;
            assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');
            if (escolha == 'S' || escolha == 's') {
                cout << "Nova data de nascimento: ";
                cin >> nascimento;
                tratador->setNascimento(nascimento);
            }

            // Nivel de seguranca
            cout << "Alterar nivel de seguranca? (S | N) ";
            cin >> escolha;
            assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');
            if (escolha == 'S' || escolha == 's') {
                cout << "Novo nivel de seguranca (Verde | Azul | Vermelho): ";
                cin >> cor;

                assert(cor == "Verde" || cor == "Azul" || cor == "Vermelho" || cor == "verde" || cor == "azul" || cor == "vermelho");

                if (cor == "Verde" || cor == "verde") {
                    nivel_de_seguranca = Cor::Verde;
                }
                else if (cor == "Azul" || cor == "azul") {
                    nivel_de_seguranca = Cor::Azul;
                }
                else if (cor == "Vermelho" || cor == "vermelho") {
                    nivel_de_seguranca = Cor::Vermelho;
                }

                tratador->setNivelDeSeguranca(nivel_de_seguranca);
            }

            return true;
        }
        index++;
    }

    return false;
}

bool listarFuncionario(string nome, vector<Veterinario*>& veterinarios, vector<Tratador*>& tratadores) {
    // Procura nome em veterinarios
    for (auto& veterinario : veterinarios) {
        if (veterinario->getNome() == nome) {
            cout << veterinario << endl;
            return true;
        }
    }

    // Procura nome em tratadores
    for (auto& tratador : tratadores) {
        if (tratador->getNome() == nome) {
            cout << tratador << endl;
            return true;
        }
    }

    return false;
}