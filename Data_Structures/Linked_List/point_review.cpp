#include <iostream>
using namespace std;

int main(){
	int v = 10;
	int *p_1 = &v;
	int *p_2 = p_1;

	cout << "p_1: " << p_1 << endl;
	cout << "p_2: " << p_2 << endl;
	cout << "*p_1: " << *p_1 << endl;
	cout << "*p_2: " << *p_2 << endl;
}
