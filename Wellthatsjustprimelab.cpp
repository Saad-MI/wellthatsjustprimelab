
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;


void primefactor(int number, int factor, vector<int>& Primefactors) {
	

	if (number <= 1) {
		return;
	}
	else if (number % factor == 0) {
		Primefactors.push_back(factor);
		number /= factor;
		primefactor(number, factor, Primefactors);

	}
	else if (number == factor) {
		Primefactors.push_back(number);
		return;
	}
	else
	{
		factor++;
		primefactor(number, factor, Primefactors);
	}


}

int main()
{

	vector<int> vec1;
	primefactor(1, 5, vec1);
	assert((vec1 == vector<int>{}));

	vector<int> vec2;
	primefactor(5, 2, vec2);
	assert((vec2 == vector<int>{5}));

	vector<int> vec3;
	primefactor(8, 2, vec3);
	assert((vec3 == vector<int>{2,2,2}));

	vector<int> vec4;
	primefactor(19, 2, vec4);
	assert((vec4 == vector<int>{19}));

	vector<int> vec5;
	primefactor(100, 2, vec5);
	assert((vec5 == vector<int>{2,2,5,5}));
	/*
	for (int x : vec) {
		cout << x << " ";
	}
	cout << endl;
	*/



}



/*
Write a function that accepts an integer argument
returns a vector containing all of that number's prime factors


*/


