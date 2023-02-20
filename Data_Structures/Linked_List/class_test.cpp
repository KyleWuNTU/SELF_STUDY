#include <iostream>
using namespace std;

class demo
{
public:
	int data;
	demo() : data(2){};
};

int main()
{
	demo first_demo;
	cout << first_demo.data;
}
