#include <iostream>
#include <random>

using namespace std;

string randDNA( int seed, string word, int n){


	if( word.length() < 1 )
		return "";

	int min = 0;
	int max = word.length() - 1;
	string dna1 = "";


	mt19937 eng1(seed);

	uniform_int_distribution<> uniform(min, max);

	for( int m = 0; m < n; m++)

	{
		int randomIndex = uniform(eng1);
		dna1 += word[randomIndex];
	}

	return dna1;
}