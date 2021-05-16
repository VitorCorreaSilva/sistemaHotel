#include <iostream>

using namespace std;

class Cliente{
	private:
		int id;
		string nome;
		int idade;
	public:
		Cliente();
		Cliente(string nome, int idade);

		int getId();
		string getNome();
		int getIdade();

		void setNome(string nome);
		void setIdade(int idade);

		void dadosCliente();

		int static ultimoId;
		int gerarId();
};