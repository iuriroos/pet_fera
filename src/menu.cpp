#include "menu.hpp"
#include <iostream>

using namespace std;

int menuPetFera() {
    int op;

    cout << "==============================================================" << endl;
    cout << "                    Bem vindo ao Pet Fera!                    " << endl;
    cout << "==============================================================" << endl << endl;

    do {
        cout << "Menu principal:" << endl << endl;
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
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
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