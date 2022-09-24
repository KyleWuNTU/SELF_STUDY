#include<iostream>
#include<vector>
using namespace std;

//calculate the average with help of array (vector)

int main(){
	double myArray[] = {50, 64, 68};
	vector<double> students(begin(myArray), end(myArray));
	double sum = 0;
	
	for(int i = 0; i < students.size(); i++){
		sum += students[i];
		}

	double average = sum / students.size();
	cout << average;
}
