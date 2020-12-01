#include "petfera.hpp"
#include "avesilvestre.hpp"
#include "anfibiosilvestre.hpp"
#include "mamiferosilvestre.hpp"
#include "reptelsilvestre.hpp"

PetFera::PetFera() {}

PetFera::~PetFera() {}

void PetFera::cabecalho(string mensagem){
    cout << "==============================================================" << endl;
    cout << "                    " << mensagem << "                    " << endl;
    cout << "==============================================================" << endl; 

}

void PetFera::cadastrarFuncionario() {
    string nome, cpf, matricula, nascimento, crmv, cor;
    Cor nivel_de_seguranca = Cor::Nenhum;
    double salario;
    char escolha; 

    this->cabecalho("Cadastro de Funcionários!");

    cout << "Informe os dados do novo funcionário:" << endl;

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
    this->cabecalho("Cadastro de Animais!");

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

    this->cabecalho("Cadastro de Animais!");

    if (this->veterinarios.size() >= 1 && this->tratadores.size() >= 1){
        cout << "Escolha o nome do veterinario dentre os abaixo listados:" << endl; 

        // Mostra o nome de todos os veterinarios cadastrados
        for (auto& veterinario : this->veterinarios) {
            cout << veterinario->getNome() << endl;
        }

        cin >> nome;

        // Procura nome em veterinarios
        for (auto& veterinario : this->veterinarios) {
            if (veterinario->getNome() == nome) {
                veterinarioResponsavel = veterinario;
                encontrouVet = true;
            }
        }

        if (!encontrouVet){
            cout << "Veterinário não encontrado!" << endl;
        }

        cout << "Escolha o nome do tratador dentre os abaixo listados:" << endl;

        // Percorre todos os tratadores
        for (auto& tratador : this->tratadores) {
            cout << tratador->getNome() << endl;
        }
        cin >> nome;

        // Procura nome em tratadores
        for (auto& tratador : this->tratadores) {
            if (tratador->getNome() == nome) {
                tratadorResponsavel = tratador;
                encontrouTrat = true;
            }
        }

        if (!encontrouTrat){
            cout << "Tratador não encontrado!" << endl;
        }

    }else{
        cout << "Ainda não existem veterinários nem tratadores cadastrados!" << endl;
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
    
    cout << "É silvestre? (S | N): ";
    cin >> ESilvestre;

    assert(ESilvestre == 'S' || ESilvestre == 's' || ESilvestre == 'N' || ESilvestre == 'n');
    
    if (ESilvestre == 'S' || ESilvestre == 's') {
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

        ameacadoDeExtincao = EameacadoDeExtincao == 'S' || ESilvestre == 's';
    }

    string corDasPenas;
    double tamanhoDoBico, tamanhoDasPenas;

    string habitat;
    int tipoMamifero;
    int quantidadeDeDentes; 
    char temAsasC;
    bool temAsas = false;

    char venenosoC, temPernasC;
    bool eVenenoso = false, temPernas = false;

    bool temNadadeiras = false, peconhento = false, poeOvos = false, temCarapaca = false, consegueNadar = false;
    char temNadadeirasC, peconhentoC, poeOvosC, temCarapacaC, consegueNadarC;

    if (ESilvestre == 'S' || ESilvestre == 's') {
        switch (tipoClassificacao)
        {
            case 1:
                // Ave
                cout << "Tamanho do bico em cm: ";
                cin >> tamanhoDoBico;
                
                cout << "Tamanho das penas em cm: ";
                cin >> tamanhoDasPenas;

                animal = new AveSilvestre(especie, sexo, tamanho,  cor, preco, tipoDeAlimentacao, veterinarioResponsavel, tratadorResponsavel, tipoSilvestre, origem, ameacadoDeExtincao, tamanhoDoBico, tamanhoDasPenas);

                break;
            case 2:
                // Anfibio
                cout << "É venenoso? (S | N): ";
                cin >> venenosoC;

                if (venenosoC == 'S' || venenosoC == 's')
                    eVenenoso = true;
                    
                cout << "Tem Pernas? (S | N): ";
                cin >> temPernasC;

                if (temPernasC == 'S' || temPernasC == 's')
                    temPernas = true;

                animal = new AnfibioSilvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinarioResponsavel, tratadorResponsavel, tipoSilvestre, origem, ameacadoDeExtincao, eVenenoso, temPernas);
                break;
            case 3:
                // Mamifero
                cout << "Habitat: ";
                cin >> habitat;

                cout << "tipo: (1) Cursorial, (2) Saltador, (3) Plantigrado, (4) Fossorial, (5) Arboricola, (6) Voador, (7) Aquatico: 4";
                cin >> tipoMamifero;

                cout << "Quantidade de dentes: ";
                cin >> quantidadeDeDentes;
    
                cout << "Tem Asas? (S | N) ";
                cin >> temAsasC;
    
                if (temAsasC == 'S' || temAsasC == 's')
                    temAsas = true;

                animal = new MamiferoSilvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinarioResponsavel, tratadorResponsavel, tipoSilvestre, origem, ameacadoDeExtincao, habitat, (Tipo)tipoMamifero, quantidadeDeDentes, temAsas);
                break;
            case 4:
                // Reptil
                cout << "Tem pernas? (S | N)";
                cin >> temPernasC;
    
                if (temPernasC == 'S' || temPernasC == 's')
                    temPernas = true;

                cout << "Tem nadadeiras? (S | N)";
                cin >> temNadadeirasC;
    
                if (temNadadeirasC == 'S' || temNadadeirasC == 's')
                 temNadadeiras = true;

                cout << "É venenoso? (S | N)";
                cin >> venenosoC;
    
                if (venenosoC == 'S' || venenosoC == 's')
                    eVenenoso = true;

                cout << "É peçonhento? (S | N)";
                cin >> peconhentoC;
    
                if (peconhentoC == 'S' || peconhentoC == 's')
                    peconhento = true;

                cout << "Poe Ovos? (S | N)";
                cin >> poeOvosC;
    
                if (poeOvosC == 'S' || poeOvosC == 's')
                    poeOvos = true;

                cout << "tem Carapaça? (S | N)";
                cin >> temCarapacaC;
    
                if (temCarapacaC == 'S' || temCarapacaC == 's')
                    temCarapaca = true;

                cout << "Consegue Nadar? (S | N)";
                cin >> consegueNadarC;
    
                if (consegueNadarC == 'S' || consegueNadarC == 's')
                    consegueNadar = true;

                animal = new ReptelSilvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinarioResponsavel, tratadorResponsavel, tipoSilvestre, origem, ameacadoDeExtincao, temPernas, temNadadeiras, eVenenoso, peconhento, poeOvos, temCarapaca, consegueNadar);
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

                animal = new Ave(especie, sexo, tamanho,  cor, preco, tipoDeAlimentacao, veterinarioResponsavel, tratadorResponsavel, tamanhoDoBico, tamanhoDasPenas);
                break;
            case 2:
                // Anfibio
                cout << "É venenoso? (S | N): ";
                cin >> venenosoC;

                if (venenosoC == 'S' || venenosoC == 's')
                    eVenenoso = true;
                    
                cout << "Tem Pernas? (S | N): ";
                cin >> temPernasC;

                if (temPernasC == 'S' || temPernasC == 's')
                    temPernas = true;

                animal = new Anfibio(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinarioResponsavel, tratadorResponsavel, eVenenoso, temPernas);
                break;
            case 3:
                // Mamifero
                cout << "Habitat: ";
                cin >> habitat;

                cout << "tipo: (1) Cursorial, (2) Saltador, (3) Plantigrado, (4) Fossorial, (5) Arboricola, (6) Voador, (7) Aquatico: ";
                cin >> tipoMamifero;


                cout << "Quantidade de dentes: ";
                cin >> quantidadeDeDentes;
    
                cout << "Tem Asas? (S | N): ";
                cin >> temAsasC;
    
                if (temAsasC == 'S' || temAsasC == 's')
                    temAsas = true;

                animal = new Mamifero(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinarioResponsavel, tratadorResponsavel, habitat, (Tipo)tipoMamifero, quantidadeDeDentes, temAsas);
                break;
            case 4:
                // Reptil
                cout << "Tem pernas? (S | N): ";
                cin >> temPernasC;
    
                if (temPernasC == 'S' || temPernasC == 's')
                    temPernas = true;

                cout << "Tem nadadeiras? (S | N): ";
                cin >> temNadadeirasC;
    
                if (temNadadeirasC == 'S' || temNadadeirasC == 's')
                 temNadadeiras = true;

                cout << "É venenoso? (S | N): ";
                cin >> venenosoC;
    
                if (venenosoC == 'S' || venenosoC == 's')
                    eVenenoso = true;

                cout << "É peçonhento? (S | N): ";
                cin >> peconhentoC;
    
                if (peconhentoC == 'S' || peconhentoC == 's')
                    peconhento = true;

                cout << "Poe Ovos? (S | N): ";
                cin >> poeOvosC;
    
                if (poeOvosC == 'S' || poeOvosC == 's')
                    poeOvos = true;

                cout << "tem Carapaça? (S | N): ";
                cin >> temCarapacaC;
    
                if (temCarapacaC == 'S' || temCarapacaC == 's')
                    temCarapaca = true;

                cout << "Consegue Nadar? (S | N): ";
                cin >> consegueNadarC;
    
                if (consegueNadarC == 'S' || consegueNadarC == 's')
                    consegueNadar = true;

                animal = new Reptel(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, veterinarioResponsavel, tratadorResponsavel, temPernas, temNadadeiras, eVenenoso, peconhento, poeOvos, temCarapaca, consegueNadar);
                break;
            default:
                break;
        }
    }

    this->animais.push_back(animal);

    return true;
}

void PetFera::removerAnimal(string nome) {
    size_t index = 0;
    auto pos = this->animais.begin();

    for (const auto& animal : this->animais) {
        if (animal->getEspecie() == nome) {
            this->animais.erase(pos + index);
            return;
        }
        index++;
    }
}

void PetFera::atualizarAnimal(string nome) {
    char escolha;
    string especie;
    Sexo sexo;
    char sexoC;
    int tamanho;
    string cor;
    double preco;
    string tipoDeAlimentacao;
    string nomeVeterinario, nomeTratador;
    bool achouNomeVeterinario = false, achouNomeTratador = false;
    double tamanhoDeBico;
    double tamanhoDasPenas;
    string origem;
    ETipoSilvestre tipoSilvestre;
    char EameacadoDeExtincao;
    char eVenenoso;
    char temPernas;
 
    if (this->animais.size() >= 1){
        for (auto& animal : this->animais) {
            if (animal->getEspecie() == nome) {;
                // Alterar espécie
                cout << "Alterar espécie? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Nova espécie: ";
                    cin >> especie;
                    animal->setEspecie(especie);
                }

                // Alterar sexo
                cout << "Alterar sexo? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Novo sexo (F | M): ";
                    cin >> sexoC;

                    assert(sexoC == 'F' || sexoC == 'f' || sexoC == 'M' || sexoC == 'm');

                    if (sexoC == 'F' || sexoC == 'f') {
                        sexo = Sexo::Femea;
                    } else{
                        sexo = Sexo::Macho;
                    }

                    animal->setSexo(sexo);
                }

                // Alterar tamanho
                cout << "Alterar tamanho? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Novo tamanho: ";
                    cin >> tamanho;
                    animal->setTamanho(tamanho);
                }

                // Alterar cor
                cout << "Alterar cor? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Nova cor: ";
                    cin >> cor;
                    animal->setCor(cor);
                }

                // Alterar preco
                cout << "Alterar preço? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Novo preço: ";
                    cin >> preco;
                    animal->setPreco(preco);
                }

                // Alterar tipo de alimentação
                cout << "Alterar tipo de alimentação? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Novo tipo de alimentação: ";
                    cin >> tipoDeAlimentacao;
                    animal->setTipoDeAlimentacao(tipoDeAlimentacao);
                }

                // Alterar veterinário
                cout << "Alterar veterinário? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Escolha um veterinário dentre os listados abaixo: ";
                    // Mostra o nome de todos os veterinarios cadastrados
                    for (auto& veterinario : this->veterinarios) {
                        cout << veterinario->getNome() << endl;
                    }
                    cin >> nomeVeterinario;
                    
                    for (auto& veterinario : this->veterinarios) {
                        if (veterinario->getNome() == nomeVeterinario){
                            achouNomeVeterinario = true;
                            animal->setVeterinario(veterinario);
                            break;
                        }   
                    }

                    if (achouNomeVeterinario == false){
                        cout << "Veterinário não encontrado na lista!" << endl;
                    }
                    
                }

                // Alterar tratador
                cout << "Alterar tratador? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Escolha um tratador dentre os listados abaixo: ";
                    // Mostra o nome de todos os tratadores cadastrados
                    for (auto& tratador : this->tratadores) {
                        cout << tratador->getNome() << endl;
                    }
                    cin >> nomeTratador;
                    
                    for (auto& tratador : this->tratadores) {
                        if (tratador->getNome() == nomeTratador){
                            achouNomeTratador = true;
                            animal->setTratador(tratador);
                            break;
                        }   
                    }

                    if (achouNomeTratador == false){
                        cout << "Tratador não encontrado na lista!" << endl;
                    }
                    
                }
            }

            string tipoClass = typeid(*animal).name();
    
            int quantidadeDeNumeros = 0;

            while (isdigit(tipoClass[quantidadeDeNumeros]))
            {
                quantidadeDeNumeros++;
            }

            tipoClass.erase(0, quantidadeDeNumeros);
            cout << tipoClass << endl;

            if (tipoClass == "Ave") {
                Ave* ave =  dynamic_cast<Ave*> (animal);

                // Alterar tamanho do bico
                cout << "Alterar tamanho do bico? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Novo tamanho de bico: ";
                    cin >> tamanhoDeBico;
                    ave->setTamanhoDoBico(tamanhoDeBico);
                }

                // Alterar tamanho das asas
                cout << "Alterar tamanho das asas? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Novo tamanho das asas: ";
                    cin >> tamanhoDasPenas;
                    ave->setTamanhoDasPenas(tamanhoDasPenas);
                }
            } 
            else if (tipoClass == "Anfibio") {
                Anfibio* anfibio =  dynamic_cast<Anfibio*> (animal);

                // Alterar e venenoso
                cout << "Alterar E venenoso? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Novo é venenoso: (S | N)";
                    cin >> eVenenoso;
                    anfibio->setEVenenoso(eVenenoso == 'S');
                }

                // Alterar tem pernas
                cout << "Alterar Tem pernas? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Novo tem pernas: (S | N)";
                    cin >> temPernas;
                    anfibio->setTemPernas(temPernas == 'S');
                }
            }
            else if (tipoClass == "Mamifero") {
                Mamifero* mamifero =  dynamic_cast<Mamifero*> (animal);
            }
            else if (tipoClass == "Reptel") {
                Reptel* reptel =  dynamic_cast<Reptel*> (animal);
            } 
            else if (tipoClass == "AveSilvestre") {
                AveSilvestre* aveSilvestre =  dynamic_cast<AveSilvestre*> (animal);
            
                // Alterar tamanho do bico
                cout << "Alterar tamanho do bico? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Novo tamanho de bico: ";
                    cin >> tamanhoDeBico;
                    aveSilvestre->setTamanhoDoBico(tamanhoDeBico);
                }

                // Alterar tamanho das asas
                cout << "Alterar tamanho das asas? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Novo tamanho das asas: ";
                    cin >> tamanhoDasPenas;
                    aveSilvestre->setTamanhoDasPenas(tamanhoDasPenas);
                }

                // Alterar Tipo Silvestre
                cout << "Alterar origem? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Novo tipo silvetres: ";
                    cin >> origem;
                    
                    if (origem == "Brasil" || origem == "brasil") {
                        tipoSilvestre = ETipoSilvestre::Nativo;
                    }
                    else {
                        tipoSilvestre = ETipoSilvestre::Exotico;
                    }

                    aveSilvestre->setOrigem(origem);
                    aveSilvestre->setTipoSilvestre(tipoSilvestre);
                }
                
                // Alterar tamanho das asas
                cout << "Alterar tamanho das asas? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Novo ameacado de Extincao: (S | N)";
                    cin >> EameacadoDeExtincao;
                    
                    assert(EameacadoDeExtincao == 'S' || EameacadoDeExtincao == 's' || EameacadoDeExtincao == 'N' || EameacadoDeExtincao == 'n');
                    
                    aveSilvestre->setAmeacadoDeExtincao(EameacadoDeExtincao == 'S');
                }
            } 
            else if (tipoClass == "AnfibioSilvestre") {
                AnfibioSilvestre* anfibioSilvestre =  dynamic_cast<AnfibioSilvestre*> (animal);
                
                // Alterar e venenoso
                cout << "Alterar E venenoso? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Novo é venenoso: (S | N)";
                    cin >> eVenenoso;
                    anfibioSilvestre->setEVenenoso(eVenenoso == 'S');
                }

                // Alterar tem pernas
                cout << "Alterar Tem pernas? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Novo tem pernas: (S | N)";
                    cin >> temPernas;
                    anfibioSilvestre->setTemPernas(temPernas == 'S');
                }

                // Alterar Tipo Silvestre
                cout << "Alterar origem? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Novo tipo silvetres: ";
                    cin >> origem;
                    
                    if (origem == "Brasil" || origem == "brasil") {
                        tipoSilvestre = ETipoSilvestre::Nativo;
                    }
                    else {
                        tipoSilvestre = ETipoSilvestre::Exotico;
                    }

                    anfibioSilvestre->setOrigem(origem);
                    anfibioSilvestre->setTipoSilvestre(tipoSilvestre);
                }
                
                // Alterar tamanho das asas
                cout << "Alterar tamanho das asas? (S | N) ";
                cin >> escolha;

                assert(escolha == 'S' || escolha == 's' || escolha == 'N' || escolha == 'n');

                if (escolha == 'S' || escolha == 's') {
                    cout << "Novo ameacado de Extincao: (S | N)";
                    cin >> EameacadoDeExtincao;
                    
                    assert(EameacadoDeExtincao == 'S' || EameacadoDeExtincao == 's' || EameacadoDeExtincao == 'N' || EameacadoDeExtincao == 'n');
                    
                    anfibioSilvestre->setAmeacadoDeExtincao(EameacadoDeExtincao == 'S');
                }
            }
            else if (tipoClass == "MamiferoSilvestre") {
                MamiferoSilvestre* mamiferoSilvestre =  dynamic_cast<MamiferoSilvestre*> (animal);
            }
            else if (tipoClass == "ReptelSilvestre") {
                ReptelSilvestre* reptelSilvestre =  dynamic_cast<ReptelSilvestre*> (animal);
            }
        }
    } else {
        cout << "Ainda não existem animais cadastrados!" << endl;
    }
}

void PetFera::dadosAnimal(string nome) {

    this->cabecalho("Dados do animal!");

    for (auto& animal : this->animais) {
        if (animal->getEspecie() == nome) {
            cout << animal << endl;

            string tipoClass = typeid(*animal).name();
    
            int quantidadeDeNumeros = 0;

            while (isdigit(tipoClass[quantidadeDeNumeros])) {
                quantidadeDeNumeros++;
            }

            tipoClass.erase(0, quantidadeDeNumeros);

            if (tipoClass == "Ave") {
                Ave* ave =  dynamic_cast<Ave*> (animal);
                cout << ave << endl;
            } 
            else if (tipoClass == "Anfibio") {
                Anfibio* anfibio =  dynamic_cast<Anfibio*> (animal);
                cout << anfibio << endl;
            }
            else if (tipoClass == "Mamifero") {
                Mamifero* mamifero =  dynamic_cast<Mamifero*> (animal);
                cout << mamifero << endl;
            }
            else if (tipoClass == "Reptel") {
                Reptel* reptel =  dynamic_cast<Reptel*> (animal);
                cout << reptel << endl;
            } 
            else if (tipoClass == "AveSilvestre") {
                AveSilvestre* aveSilvestre =  dynamic_cast<AveSilvestre*> (animal);
                cout << aveSilvestre << endl;
            } 
            else if (tipoClass == "AnfibioSilvestre") {
                AnfibioSilvestre* anfibioSilvestre =  dynamic_cast<AnfibioSilvestre*> (animal);
                cout << anfibioSilvestre << endl;
            }
            else if (tipoClass == "MamiferoSilvestre") {
                MamiferoSilvestre* mamiferoSilvestre =  dynamic_cast<MamiferoSilvestre*> (animal);
                cout << mamiferoSilvestre << endl;
            }
            else if (tipoClass == "ReptelSilvestre") {
                ReptelSilvestre* reptelSilvestre =  dynamic_cast<ReptelSilvestre*> (animal);
                cout << reptelSilvestre << endl;
            }
        }
    }
}

void PetFera::listarAnimaisPorFuncionario(string nomeFuncionario) {

    for (auto& animal : this->animais) {
        if (animal->getVeterinario()->getNome() == nomeFuncionario || animal->getTratador()->getNome() == nomeFuncionario) {
            cout << animal << endl;
        }
    }
}

void PetFera::dadosDeUmaClasseAnimal(string nome) {}