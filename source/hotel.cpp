#include "hotel.hpp"

Hotel::Hotel(){}

Hotel::Hotel(string nome){
	this->nome = nome;
}

Hotel::Hotel(vector<Cliente> clientes, vector<Quarto> quartos){
	this->clientes = move(clientes);
	this->quartos = move(quartos);
}

string Hotel::getNome(){
	return  nome;
}

vector<Cliente> Hotel::getClientes(){
	return clientes;
}

vector<Quarto> Hotel::getQuartos(){
	return quartos;
}

void Hotel::setNome(string nome){
	this->nome = nome;
}

void Hotel::setClientes(vector<Cliente> clientes){
	this->clientes = move(clientes);
}

void Hotel::setQuartos(vector<Quarto> quartos){
	this->quartos = move(quartos);
}

void Hotel::adicionarCliente(string nome, int idade){
	Cliente cliente(nome, idade);
	clientes.push_back(cliente);
}

void Hotel::excluirCliente(int id){
	int numeroClientes = clientes.size();
	for (int i = 0; i < numeroClientes; ++i)
	{
		if(clientes[i].getId() == id){
			clientes.erase(clientes.begin() + i);
		}
	}
}

void Hotel::excluirCliente(string nome){
	int numeroClientes = clientes.size();
	for (int i = 0; i < numeroClientes; ++i)
	{
		if(clientes[i].getNome() == nome){
			clientes.erase(clientes.begin() + i);
		}
	}
}

void Hotel::procurarCliente(int id){
	int numeroClientes = clientes.size();
	for (int i = 0; i < numeroClientes; ++i)
	{
		if(clientes[i].getId() == id){
			clientes[i].dadosCliente();
		}
	}
}

void Hotel::procurarCliente(string nome){
	int numeroClientes = clientes.size();
	for (int i = 0; i < numeroClientes; ++i)
	{
		if(clientes[i].getNome() == nome){
			clientes[i].dadosCliente();
		}
	}
}

void Hotel::listarClientes(){
	int numeroClientes = clientes.size();
	cout << "========= Lista com os dados dos clientes =========" << endl;
	for (int i = 0; i < numeroClientes; ++i)
	{
		clientes[i].dadosCliente();
	}
}