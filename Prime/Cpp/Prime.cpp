#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int isPrime(int x) {
	if (x<2) return -1;
	if (x==2) return 1;
	if (x%2==0) return 0;
	for (int i=3; i<=sqrt(x); i+=2) {
		if(x%i==0) return 0;
	}
	return 1;
}

int main() {
	int n,i;
	string str,ans[3]={"Error","Composite number","Prime number"};
	
	do {
		cout << "number : " << flush;
		getline(cin,str);
		try {
			n = stoi(str);
		}
		catch(exception &e) {
			n = 0;
		}
		if (n < 0) n = 0;
		cout << ans[isPrime(n)+1] << endl;
		cout << endl;
		cout << "Continue? (Yes : 1 / No : 0) : " << flush;
		getline(cin,str);
		try {
			i = stoi(str);
		}
		catch(exception &e) {
			i = 0;
		}
		cout << endl;
	} while(i != 0);
}