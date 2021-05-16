#include "cliente.hpp"
#include "quarto.hpp"
#include <string>

class Hotel{
	private:
		string nome;
		vector<Cliente> clientes;
		vector<Quarto> quartos;
	public:
		Hotel();
		Hotel(string nome);
		Hotel(vector<Cliente> clientes, vector<Quarto> quartos);

		string getNome();
		vector<Cliente> getClientes();
		vector<Quarto> getQuartos();

		void setNome(string nome);
		void setClientes(vector<Cliente> clientes);
		void setQuartos(vector<Quarto> quartos);

		void adicionarCliente(string nome, int idade);
		void excluirCliente(int id);
		void excluirCliente(string nome);
		void procurarCliente(int id);
		void procurarCliente(string nome);

		void adicionarQuarto(Quarto quarto);
		void excluirQuarto(int numero);

		void listarClientes();
};