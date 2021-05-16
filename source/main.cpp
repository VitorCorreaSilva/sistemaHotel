#include "menu.hpp"

using namespace std;

int main()
{
	string nome;

	cout << "Ola, Bem vindo" << endl;
	cout << endl;
	cout << "Digite o nome do seu Hotel: ";
	cin >> nome;

	Hotel hotel(nome);

	int opcao;
	Menu menu;
	while(opcao != 0){
		menu.getMenuInicial(hotel);
		cin >> opcao;

		switch(opcao){
			case 1:
				menu.getMenuCliente(hotel);
				break;
			case 2:
				menu.getMenuQuarto(hotel);
				break;
		}


	}
}