// InvertedIndex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "InvertedIndex.h"
using namespace std;

int main()
{
	InvertedIndex index;
	index.add("a", "simple.txt", 2);
	index.add("c", "simple.txt", 3);
	index.add("b", "simple.txt", 5);
	index.add("a", "simple.txt", 3);
	index.add("c", "simple2.txt", 1);

	//test
	vector<string> words = index.getWords();
	vector<string> locationsForC = index.getLocationsOfWord("c");
	vector<int> wordLocationsForA = index.getLocations("a", "simple.txt");

	cout << "words:" << endl;
	for (string word : words) {
		cout << word << endl;
	}

	cout << "Locations for C:" << endl;
	for (string location : locationsForC) {
		cout << location << endl;
	}

	cout << "Positions for A in simple.txt:" << endl;
	for (int position : wordLocationsForA) {
		cout << position << endl;
	}
}
