#include "cama.hpp"
#include <vector>

using namespace std;

enum Tipo{
	SIMPLES,
	LUXO
};

class Quarto{
	private:
		int numero;
		bool ocupado;
		Tipo tipo;
		vector<Cama> camas;
	public:
		Quarto();
		Quarto(int numero, bool ocupado, Tipo tipo, vector<Cama> camas);

		int getNumero();
		bool getOcupado();
		Tipo getTipo();
		vector<Cama> getCamas();

		void setNumero(int numero);
		void setOcupado(bool ocupado);
		void setTipo(Tipo tipo);
		void setCamas(vector<Cama> camas);

		void dadosQuarto();
		string tipoToString(Tipo tipo);
		void listarCamas();
};