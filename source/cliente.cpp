#include "cliente.hpp"

int Cliente::ultimoId = 0;

Cliente::Cliente(){}

Cliente::Cliente(string nome, int idade){
	this->id = gerarId();
	this->nome = nome;
	this->idade = idade;
}

int Cliente::getId(){
	return id;
}

string Cliente::getNome(){
	return nome;
}

int Cliente::getIdade(){
	return idade;
}

void Cliente::setNome(string nome){
	this->nome = nome;
}

void Cliente::setIdade(int idade){
	this->idade = idade;
}

void Cliente::dadosCliente(){
	cout << "Id: " << getId() << endl;
	cout << "Nome: " << getNome() << endl;
	cout << "Idade: " << getIdade() << endl;
}

int Cliente::gerarId(){
	ultimoId++;
	return ultimoId;
}