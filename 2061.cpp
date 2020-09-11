#include <iostream>

using namespace std;

int main(){
	int pages, n;
	string acao;
	
	cin >> pages >> n;
	
	for(int i = 0; i < n; i++) {
		acao = "";
		cin	>> acao;
		
		if (acao == "clicou") pages--;
		
		else if (acao == "fechou") pages +=1;
		
	}
	
	cout << pages << endl;
	
	return 0;
}
