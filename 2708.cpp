#include <iostream>

using namespace std;

int main(){
	string funcao = "";
	int t = 0, j = 0, n = 0;	
	
	while (1 > 0) {
		cin >> funcao >> n;
		if (funcao == "ABEND") {
			break;
		}
		
		if (funcao == "SALIDA") {
			j++;
			t+=n;
			continue;
		}
		
		if (funcao == "VUELTA") {
			j--;
			t-=n;
			continue;
		}
		
		funcao = "";
		n = 0;
	}
	
	cout << t << endl << j << endl;
	
	return 0;
}
