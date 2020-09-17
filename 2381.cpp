#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int k, n;
	
	cin >> k >> n;
	
	string alunos[k];
	
	for (int i = 0; i < k; i++) {
		cin >> alunos[i];
	}
	
	int l = sizeof(alunos)/sizeof(alunos[0]);

	sort(alunos, alunos + l);
	
	cout << alunos[n-1] << endl;
	
	return 0;
}
