#include <iostream>

using namespace std;

#define MILUM 1.50
#define MILDOIS 2.50
#define MILTRES 3.50
#define MILQUATRO 4.50
#define MILCINCO 5.50

int main(){
	int p, q, t, i;
	double r;
	
	cin >> t;
	
	while (i < t) {
		cin >> p >> q;
		
		if (p == 1001) r += MILUM * q; 
		
		else if (p == 1002) r += MILDOIS * q;
		
		else if (p == 1003) r += MILTRES * q;
		
		else if (p == 1004) r += MILQUATRO * q;
		
		else if (p == 1005) r += MILCINCO * q;
		
		i++;
	}
	
	cout.precision(2);
	cout << fixed << r << endl;
	
	return 0;
}
