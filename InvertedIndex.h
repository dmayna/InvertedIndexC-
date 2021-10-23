#pragma once

#include <iostream>
#include <map>
#include <vector>

class InvertedIndex
{
public:
	int getWordCount(string location);
	void add(string word, string location, int position);
	vector<string> getLocationsOfWord(string word);
	vector<string> getWords();
	vector<int> getLocations(string word, string location);
	bool containsWord(string word);
	bool containsWordLocation(string word, string location);
	bool contains(string word, string location, int position);
	int wordSize();
	int locationSize(string word);
	int positionSize(string word, string location);
private:
	map<string, map< string, vector<int>>> Map;
	map< string, int> WordCount;
};

