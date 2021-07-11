#include <iostream>
#include <string>
#include <random>
#include <vector>

using namespace std;

void Swap(vector<int>& ar,int i,int j) {
	int tmp = ar[i];
	ar[i]=ar[j];
	ar[j]=tmp;
}

void PrintAr(vector<int> ar,int n) {
	cout << "[ " << flush;
	for (int i=0; i<n; i++) {
		cout << ar[i];
		if (i != n-1)
			cout << ", ";
	}
	cout << " ]" << endl;
}

void QSort(vector<int>& ar, int left, int right) {
	int i = left;
	int j = right;
	int pivot = ar[left];
	while (1) {
		while (ar[i] < pivot)
			i++;
		while (pivot < ar[j])
			j--;
		if (i >= j)
			break;
		Swap(ar,i,j);
		i++;
		j--;
	}
	if (left < i-1)
		QSort(ar, left, i-1);
	if (j+1 < right)
		QSort(ar, j+1, right);
}


int main() {
	string str;
	int n;
	
	// Input
	cout << "n = ";
	getline(cin,str);
	try {
		n = stoi(str);
	}
	catch(exception &e) {
		n = 0;
	}
	if (n < 10) {
		n = 10;
	}
	cout << endl;
	
	// Initialize
	vector<int> ar(n);
	for (int i = 0; i < n; i++) {
		ar[i] = i+1;
	}
	
	// Shuffle
	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> rand(0, n-1);
	for (int i = n; i > 1; i--) {
        Swap(ar,i-1,rand(mt)%i);
    }
    
    PrintAr(ar,n);
    QSort(ar,0,n-1);
    PrintAr(ar,n);
}