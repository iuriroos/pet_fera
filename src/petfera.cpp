#include "petfera.hpp"
#include "silvestre.hpp"

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

void PetFera::cadastrarAnimal() {
    string especie, cor, tipoDeAlimentacao, origem;
    Sexo sexo;
    int tamanho, tipoClassificacao;
    double preco;
    ETipoSilvestre tipoSilvestre;
    bool ameacadoDeExtincao;
    
    Animal* animal;

    char sexoC;
    char ESilvestre;
    char EameacadoDeExtincao;
    char ENativo;

    cout << "Especie: ";
    cin >> especie;
    cout << "cor: ";
    cin >> cor;
    cout << "tipo de alimentacao: ";
    cin >> tipoDeAlimentacao;
    cout << "Sexo (F | M): ";
    cin >> sexoC;
    cout << "Tamanho em cm: ";
    cin >> tamanho;
    cout << "preço: ";
    cin >> preco;
    cout << "O Animal é: (1) Ave, (2) Anfibio, (3) Mamifero, (4) Reptel: ";
    cin >> tipoClassificacao;
    
    cout << "É silvestre? (S | N): ";
    cin >> ESilvestre;
    
    if (ESilvestre == 'S') {
        cout << "É Nativo? (S | N): ";
        cin >> ENativo;
        
        if (ENativo == 'S') {
            tipoSilvestre = ETipoSilvestre::Nativo;
            origem = "Brasil";
        } else {
            tipoSilvestre = ETipoSilvestre::Exotico;
            
            cout << "origem: ";
            cin >> origem;
        }
        
        cout << "Está ameaçado de Extenção? (S | N): ";
        cin >> EameacadoDeExtincao;

        ameacadoDeExtincao = EameacadoDeExtincao == 'S';
        
        animal = new Silvestre(especie, sexo, tamanho, cor, preco, tipoDeAlimentacao, tipoSilvestre, origem, ameacadoDeExtincao);
    } else {

    }

    this->animais.push_back(animal);
}

void PetFera::RemoverAnimal(string nome) {}
void PetFera::AtualizarAnimal(string nome) {}
void PetFera::ListarAnimais() {}
void PetFera::ListarAnimaisPorFuncionario(string nomeFuncionario) {}