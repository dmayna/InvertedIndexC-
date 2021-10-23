#include "InvertedIndex.h"
using namespace std;

int InvertedIndex::getWordCount(string location)
{
	return WordCount[location];
}

void InvertedIndex::add(string word, string location, int position)
{
	if (Map[word].empty()) {
		vector<int> temp = { position };
		Map[word].insert(pair < string, vector<int> >(location, temp));
		//Map[word][location][0] = position;
	}
	else {
		Map[word][location].push_back(position);
	}
	cout << "Added: " << word << " to index" << endl;
}

vector<string> InvertedIndex::getLocationsOfWord(string word)
{
	vector<string> locations;
	for (auto it = Map[word].begin(); it != Map[word].end(); it++)
	{
		locations.push_back(it->first);
	}
	return locations;
}

vector<string> InvertedIndex::getWords()
{
	vector<string> words;
	for (auto it = Map.begin(); it != Map.end(); it++)
	{
		words.push_back(it->first);
	}
	return words;
}

vector<int> InvertedIndex::getLocations(string word, string location)
{
	return Map[word][location];
}

bool InvertedIndex::containsWord(string word) {
	if (Map[word].empty()) {
		return false;
	}
	else {
		return true;
	}
}

bool InvertedIndex::containsWordLocation(string word, string location)
{
	if (Map[word][location].empty()) {
		return false;
	}
	else {
		return true;
	}
}

bool InvertedIndex::contains(string word, string location, int position)
{
	for (int i : Map[word][location]) {
		if (position == i) {
			return true;
		}
	}
	return false;
}

int InvertedIndex::wordSize()
{
	return Map.size();
}

int InvertedIndex::locationSize(string word)
{
	return Map[word].size();
}

int InvertedIndex::positionSize(string word, string location)
{
	return Map[word][location].size();
}