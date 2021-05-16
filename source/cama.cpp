#include "cama.hpp"

Cama::Cama(){}

Cama::Cama(string tipoCama){
	this->tipoCama = tipoCama;
}

string Cama::getTipoCama(){
	return tipoCama;
}

void Cama::setTipoCama(string tipoCama){
	this->tipoCama = tipoCama;
}