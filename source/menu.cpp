#include "menu.hpp"

Menu::Menu(){}

void Menu::getMenuInicial(Hotel hotel){
	system("clear");
	cout << "Hotel " << hotel.getNome() << endl;
	cout << "Menu inicial "<< endl;
	cout << endl;
	cout << "1 - Gerenciar Clientes" << endl;
	cout << "2 - Gerenciar Quartos" << endl;
	cout << "3 - Fazer Reserva" << endl;

	cout << "0 - Sair" << endl;
	cout << "Opcao: ";
}

void Menu::getMenuCliente(Hotel hotel){
	int opcao;
	string nome;
	int id;

	system("clear");
	while(opcao != 9){
		cout << "1 - Adicionar Cliente" << endl;
		cout << "2 - Excluir Cliente por ID" << endl;
		cout << "3 - Excluir Cliente por Nome" << endl;
		cout << "4 - Procurar cliente por ID" << endl;
		cout << "5 - Procurar cliente pelo Nome" << endl;
		cout << "6 - Listar Clientes" << endl;

		cout << "9 - voltar" << endl;
		cout << "Opcao: ";
		cin >> opcao;
		switch(opcao){
			case 1:
				cout << "Digite o nome do cliente: ";
				cin >> nome;
				cout << "Digite a idade do cliente: ";
				cin >> id;
				hotel.adicionarCliente(nome, id);
				getchar();
			break;
			case 2:
				cout << "Digite o ID do cliente: ";
				cin >> id;
				hotel.excluirCliente(id);
			break;
			case 3:
				cout << "Digite o Nome do cliente: ";
				cin >> nome;
				hotel.excluirCliente(nome);
			break;
			case 4:
				cout << "Digite o ID do cliente: ";
				cin >> id;
				hotel.procurarCliente(id);
			break;
			case 5:
				cout << "Digite o Nome do cliente: ";
				cin >> nome;
				hotel.procurarCliente(nome);
			break;
			case 6:
				hotel.listarClientes();
			break;
			default:
				cout << "Escolha uma opcao valida..." << endl;
			break;
		}
	
	}
}

void Menu::getMenuQuarto(Hotel hotel){
	int opcao;
	string nome;
	int id;

	system("clear");
	while(opcao != 9){
		cout << "1 - Adicionar Quarto" << endl;
		cout << "2 - Excluir Quarto por Numero" << endl;
		cout << "3 - Excluir Cliente por Nome" << endl;
		cout << "4 - Procurar cliente por ID" << endl;
		cout << "5 - Procurar cliente pelo Nome" << endl;
		cout << "6 - Listar Clientes" << endl;

		cout << "9 - voltar" << endl;
		cout << "Opcao: ";
		cin >> opcao;
		switch(opcao){
			case 1:
			break;
		}
}