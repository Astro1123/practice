#include <iostream>
#include <string>

using namespace std;

int Fibonacci(int x) {
	return (x < 2 ? x : Fibonacci(x - 2) + Fibonacci(x - 1));
}

int main() {
	int i,n;
	string str;
	
	cout << "n = " << flush;
	getline(cin,str);
	try {
		n = stoi(str);
	}
	catch(exception &e) {
		n = 0;
	}
	if (n < 0) n = 0;
	cout << endl;
	
	for (i=0; i<=n; i++)
		cout << i << " : " << Fibonacci(i) << endl;
	
	cout << endl;
}