#include "petfera.hpp"
#include "avessilvestres.hpp"
#include "anfibiossilvestres.hpp"
#include "mamiferossilvestres.hpp"
#include "repteissilvestres.hpp"

PetFera::PetFera() {}

PetFera::~PetFera() {}

void PetFera::cadastrarFuncionario() {
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

        this->veterinarios.push_back(new Veterinario(nome, cpf, matricula, salario, nascimento, crmv));
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

        this->tratadores.push_back(new Tratador(nome, cpf, matricula, salario, nascimento, nivel_de_seguranca));
    }
}

bool PetFera::listarTodosFuncionarios() {
    // Flag para mensagem em caso de nao existirem funcionarios
    bool existeFuncionarios = false;
    cout << "Veterinarios:" << endl;

    // Percorre todos os veterinarios
    for (auto& veterinario : this->veterinarios) {
        cout << veterinario << endl;
        existeFuncionarios = true;
    }

    cout << "Tratadores:" << endl;

    // Percorre todos os tratadores
    for (auto& tratador : this->tratadores) {
        cout << tratador << endl;
        existeFuncionarios = true;
    }

    return existeFuncionarios;
}

bool PetFera::removerFuncionario(string nome) {
    int index = 0;
    auto pos_vet = this->veterinarios.begin();

    // Procura nome em veterinarios
    for (const auto& veterinario : this->veterinarios) {
        if (veterinario->getNome() == nome) {
            this->veterinarios.erase(pos_vet + index);
            return true;
        }
        index++;
    }

    index = 0;
    auto pos_trat = this->tratadores.begin();

    // Procura nome em tratadores
    for (const auto& tratador : this->tratadores) {
        if (tratador->getNome() == nome) {
            this->tratadores.erase(pos_trat + index);
            return true;
        }
        index++;
    }

    return false;
}

bool PetFera::alterarFuncionario(string nome) {
    int index = 0;
    string nomeFuncionario, cpf, matricula, nascimento, crmv, cor;
    Cor nivel_de_seguranca = Cor::Nenhum;
    char escolha;
    //double salario = 0;
    //auto pos_vet = this->veterinarios.begin();

    // Update de veterinarios
    for (const auto& veterinario : this->veterinarios) {
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
    //auto pos_trat = this->tratadores.begin();

    // Update de tratadores
    for (const auto& tratador : this->tratadores) {
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

bool PetFera::listarFuncionario(string nome) {
    // Procura nome em veterinarios
    for (auto& veterinario : this->veterinarios) {
        if (veterinario->getNome() == nome) {
            cout << veterinario << endl;
            return true;
        }
    }

    // Procura nome em tratadores
    for (auto& tratador : this->tratadores) {
        if (tratador->getNome() == nome) {
            cout << tratador << endl;
            return true;
        }
    }

    return false;
}

bool PetFera::cadastrarAnimal() {
    string especie, cor, tipoDeAlimentacao, origem, nome;
    Sexo sexo;
    int tamanho, tipoClassificacao;
    double preco;
    ETipoSilvestre tipoSilvestre;
    bool ameacadoDeExtincao, encontrouVet = false, encontrouTrat = false;

    Veterinario* veterinarioResponsavel;
    Tratador* tratadorResponsavel;
    Animal* animal;

    char sexoC;
    char ESilvestre;
    char EameacadoDeExtincao;

    cout << "Qual sera o nome do veterinario responsavel?" << endl;
    cin >> nome;

    // Procura nome em veterinarios
    for (auto& veterinario : this->veterinarios) {
        if (veterinario->getNome() == nome) {
            veterinarioResponsavel = veterinario;
            encontrouVet = true;
        }
    }

    cout << "Qual sera o nome do tratador responsavel?" << endl;
    cin >> nome;

    // Procura nome em tratadores
    for (auto& tratador : this->tratadores) {
        if (tratador->getNome() == nome) {
            tratadorResponsavel = tratador;
            encontrouTrat = true;
        }
    }

    if (!encontrouVet || !encontrouTrat) {
        return false;
    }

    cout << "Nome: ";
    cin >> especie;
    cout << "Cor: ";
    cin >> cor;
    cout << "Tipo de alimentacao: ";
    cin >> tipoDeAlimentacao;
    cout << "Sexo (F | M): ";
    cin >> sexoC;

    assert(sexoC == 'F' || sexoC == 'f' || sexoC == 'M' || sexoC == 'm');

    if (sexoC == 'F' || sexoC == 'f') {
        sexo = Sexo::Femea;
    } else
    {
        sexo = Sexo::Macho;
    }

    cout << "Tamanho em cm: ";
    cin >> tamanho;
    cout << "Preco: ";
    cin >> preco;
    cout << "O Animal eh: (1) Ave, (2) Anfibio, (3) Mamifero, (4) Reptil: ";
    cin >> tipoClassificacao;

    assert(tipoClassificacao == 1 || tipoClassificacao == 2 || tipoClassificacao == 3 || tipoClassificacao == 4);
    
    cout << "Eh silvestre? (S | N): ";
    cin >> ESilvestre;

    assert(ESilvestre == 'S' || ESilvestre == 's' || ESilvestre == 'N' || ESilvestre == 'n');
    
    if (ESilvestre == 'S') {
        cout << "Qual o pais de origem? ";
        cin >> origem;

        if (origem == "Brasil" || origem == "brasil") {
            tipoSilvestre = ETipoSilvestre::Nativo;
        }
        else {
            tipoSilvestre = ETipoSilvestre::Exotico;
        }
        
        cout << "Esta ameacado de Extincao? (S | N): ";
        cin >> EameacadoDeExtincao;

        assert(EameacadoDeExtincao == 'S' || EameacadoDeExtincao == 's' || EameacadoDeExtincao == 'N' || EameacadoDeExtincao == 'n');

        ameacadoDeExtincao = EameacadoDeExtincao == 'S';
    }

    string corDasPenas;
    double tamanhoDoBico, tamanhoDasPenas;

    string habitat;
    int tipoMamifero;
    string corDosPelos; 
    int quantidadeDeDentes; 
    char temAsasC;
    bool temAsas;

    string corDaPele;
    char venenosoC, temPernasC;
    bool venenoso, temPernas;

    bool temNadadeiras, peconhento, poeOvos, temCarapaca, consegueNadar;
    char temNadadeirasC, peconhentoC, poeOvosC, temCarapacaC, consegueNadarC;

    if (ESilvestre == 'S') {
        switch (tipoClassificacao)
        {
            case 1:
                // Ave
                cout << "Cor das penas: ";
                cin >> corDasPenas;

                cout << "Tamanho do bico em cm: ";
                cin >> tamanhoDoBico;
                
                cout << "Tamanho das penas em cm: ";
                cin >> tamanhoDasPenas;

                animal = new AvesSilvestres(especie, sexo, tamanho,  cor, preco, tipoDeAlimentacao, veterinarioResponsavel, tratadorResponsavel, tipoSilvestre, origem, ameacadoDeExtincao, corDasPenas, tamanhoDoBico, tamanhoDasPenas);
                break;
            case 2:
                // Anfibio
                cout << "cor da pele: ";
                cin >> corDaPele;

                cout << "É venenoso? (S | N): ";
                cin >> venenosoC;

                if (venenosoC == 'S')
                    venenoso = true;
                    
                cout << "Tem Pernas? (S | N): ";
                cin >> temPernasC;

                if (temPernasC == 'S')
                    temPernas = true;

                animal = new AnfibiosSilvestres(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinarioResponsavel, tratadorResponsavel, tipoSilvestre, origem, ameacadoDeExtincao, corDaPele, venenoso, temPernas);
                break;
            case 3:
                // Mamifero
                cout << "Habitat: ";
                cin >> habitat;

                cout << "tipo: (1) Cursorial, (2) Saltador, (3) Plantigrado, (4) Fossorial, (5) Arboricola, (6) Voador, (7) Aquatico";
                cin >> tipoMamifero;
    
                cout << "cor dos pelos:";
                cin >> corDosPelos;

                cout << "Quantidade de dentes:";
                cin >> quantidadeDeDentes;
    
                cout << "Quantidade de dentes? (S | N)";
                cin >> temAsasC;
    
                if (temAsasC == 'S')
                    temAsas = true;

                animal = new MamiferosSilvestres(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinarioResponsavel, tratadorResponsavel, tipoSilvestre, origem, ameacadoDeExtincao, habitat, (Tipo)tipoMamifero, corDosPelos, quantidadeDeDentes, temAsas);
                break;
            case 4:
                // Reptil

                cout << "Tem penas? (S | N)";
                cin >> temPernasC;
    
                if (temPernasC == 'S')
                    temPernas = true;

                cout << "Tem nadadeiras? (S | N)";
                cin >> temNadadeirasC;
    
                if (temNadadeirasC == 'S')
                 temNadadeiras = true;

                cout << "É venenoso? (S | N)";
                cin >> venenosoC;
    
                if (venenosoC == 'S')
                    venenoso = true;

                cout << "É peçonhento? (S | N)";
                cin >> peconhentoC;
    
                if (peconhentoC == 'S')
                    peconhento = true;

                cout << "Poe Ovos? (S | N)";
                cin >> poeOvosC;
    
                if (poeOvosC == 'S')
                    poeOvos = true;

                cout << "tem Carapaça? (S | N)";
                cin >> temCarapacaC;
    
                if (temCarapacaC == 'S')
                    temCarapaca = true;

                cout << "Consegue Nadar? (S | N)";
                cin >> consegueNadarC;
    
                if (consegueNadarC == 'S')
                    consegueNadar = true;

                animal = new RepteisSilvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinarioResponsavel, tratadorResponsavel, tipoSilvestre, origem, ameacadoDeExtincao, temPernas, temNadadeiras, venenoso, peconhento, poeOvos, temCarapaca, consegueNadar);
                break;
            default:
                break;
        }
    } else {
        switch (tipoClassificacao)
        {
            case 1:
                // Ave
                cout << "Cor das penas: ";
                cin >> corDasPenas;

                cout << "Tamanho do bico em cm: ";
                cin >> tamanhoDoBico;
                
                cout << "Tamanho das penas em cm: ";
                cin >> tamanhoDasPenas;

                animal = new Aves(especie, sexo, tamanho,  cor, preco, tipoDeAlimentacao, veterinarioResponsavel, tratadorResponsavel, corDasPenas, tamanhoDoBico, tamanhoDasPenas);
                break;
            case 2:
                // Anfibio
                cout << "cor da pele: ";
                cin >> corDaPele;

                cout << "É venenoso? (S | N): ";
                cin >> venenosoC;

                if (venenosoC == 'S')
                    venenoso = true;
                    
                cout << "Tem Pernas? (S | N): ";
                cin >> temPernasC;

                if (temPernasC == 'S')
                    temPernas = true;

                animal = new Anfibios(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinarioResponsavel, tratadorResponsavel, corDaPele, venenoso, temPernas);
                break;
            case 3:
                // Mamifero
                cout << "Habitat: ";
                cin >> habitat;

                cout << "tipo: (1) Cursorial, (2) Saltador, (3) Plantigrado, (4) Fossorial, (5) Arboricola, (6) Voador, (7) Aquatico";
                cin >> tipoMamifero;
    
                cout << "cor dos pelos:";
                cin >> corDosPelos;

                cout << "Quantidade de dentes:";
                cin >> quantidadeDeDentes;
    
                cout << "Quantidade de dentes? (S | N)";
                cin >> temAsasC;
    
                if (temAsasC == 'S')
                    temAsas = true;

                animal = new Mamiferos(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinarioResponsavel, tratadorResponsavel, habitat, (Tipo)tipoMamifero, corDosPelos, quantidadeDeDentes, temAsas);
                break;
            case 4:
                // Reptil
                cout << "Tem penas? (S | N)";
                cin >> temPernasC;
    
                if (temPernasC == 'S')
                    temPernas = true;

                cout << "Tem nadadeiras? (S | N)";
                cin >> temNadadeirasC;
    
                if (temNadadeirasC == 'S')
                 temNadadeiras = true;

                cout << "É venenoso? (S | N)";
                cin >> venenosoC;
    
                if (venenosoC == 'S')
                    venenoso = true;

                cout << "É peçonhento? (S | N)";
                cin >> peconhentoC;
    
                if (peconhentoC == 'S')
                    peconhento = true;

                cout << "Poe Ovos? (S | N)";
                cin >> poeOvosC;
    
                if (poeOvosC == 'S')
                    poeOvos = true;

                cout << "tem Carapaça? (S | N)";
                cin >> temCarapacaC;
    
                if (temCarapacaC == 'S')
                    temCarapaca = true;

                cout << "Consegue Nadar? (S | N)";
                cin >> consegueNadarC;
    
                if (consegueNadarC == 'S')
                    consegueNadar = true;

                animal = new Repteis(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinarioResponsavel, tratadorResponsavel, temPernas, temNadadeiras, venenoso, peconhento, poeOvos, temCarapaca, consegueNadar);
                
                break;
            default:
                break;
        }
    }

    this->animais.push_back(animal);

    return true;
}

void PetFera::RemoverAnimal(string nome) {}

void PetFera::AtualizarAnimal(string nome) {}

void PetFera::DadosAnimail(string nome) {
    for (auto& animal : this->animais) {
        if (animal->getEspecie() == nome) {
            cout << animal << endl;
        }
    }
}

void PetFera::ListarAnimaisPorFuncionario(string nomeFuncionario) {}

void PetFera::DadosDeUmaClasseAnimal(string nome) {}