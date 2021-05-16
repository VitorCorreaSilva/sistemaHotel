#include <iostream>

using namespace std;

class Cama{
	private:
		string tipoCama;
	public:
		Cama();
		Cama(string tipoCama);
		string getTipoCama();
		void setTipoCama(string cama);
};