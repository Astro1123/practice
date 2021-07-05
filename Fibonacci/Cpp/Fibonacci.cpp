#include <iostream>
#include <string>

using namespace std;

int Fibonacci(int x) {
	return (x < 2 ? x : Fibonacci(x - 2) + Fibonacci(x - 1));
}

int main() {
	string str;
	
	cout << "n = " << flush;
	getline(cin,str);
	int n;
	try {
		n = stoi(str);
	}
	catch(exception &e) {
		n = 0;
	}
	if (n < 0) n = 0;
	cout << endl;
	
	for (int i=0; i<=n; i++)
		cout << i << " : " << Fibonacci(i) << endl;
	
	cout << endl;
}