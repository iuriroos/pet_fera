#include <iostream>
#include <vector>
#include "menu.hpp"

using namespace std;

int main(int argc, char *argv[]) {
	vector<Veterinario*> veterinarios;
	vector<Tratador*> tratadores;

	menuPetFera(veterinarios, tratadores);

	return 0;
}