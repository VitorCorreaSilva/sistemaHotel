#include "quarto.hpp"

Quarto::Quarto(){}

Quarto::Quarto(int numero, bool ocupado, Tipo tipo, vector<Cama> camas){
	this->numero = numero;
	this->ocupado = ocupado;
	this->tipo = tipo;
	this->camas = move(camas);
}

int Quarto::getNumero(){
	return numero
;}

bool Quarto::getOcupado(){
	return ocupado;
}

Tipo Quarto::getTipo(){
	return tipo;
}

vector<Cama> Quarto::getCamas(){
	return camas;
}

void Quarto::setNumero(int numero){
	this->numero = numero;
}

void Quarto::setOcupado(bool ocupado){
	this->ocupado = ocupado;
}

void Quarto::setTipo(Tipo tipo){
	this->tipo = tipo;
}

void Quarto::setCamas(vector<Cama> camas){
	this->camas = move(camas);
}

void Quarto::dadosQuarto(){
	cout << "Numero: " << getNumero() << endl;
	cout << "Ocupado: " << ocupado ? "Sim" : "Nao";
	cout << "Tipo: " << tipoToString(getTipo());
	cout << "Quantidade camas: " << camas.size() << endl;
	cout << "===========================================";
	listarCamas();
	cout << "===========================================";
}

string Quarto::tipoToString(Tipo tipo){
	switch(tipo){
		case 0:
			return "Simples";
		break;
		case 1:
			return "Luxo";
		break;
	}
}

void Quarto::listarCamas(){
	int numeroCamas = camas.size();
	for (int i = 0; i < numeroCamas; ++i)
	{
		camas[i].dadosCama();
	}
}