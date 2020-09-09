#include <iostream>
#include <string>

using namespace std;

int main() {
	string nome = "";
	double salario, vendas;
	
	cin >> nome;
	cin >> salario;
	cin >> vendas;
	
	cout.precision(2);
	cout << fixed << "TOTAL = R$ " << salario + (vendas*0.15) << endl;
	
	return 0;
}
