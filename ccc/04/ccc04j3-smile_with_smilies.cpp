#include <bits/stdc++.h>
using namespace std;

int main() {
	int numAdj, numNoun;
	cin >> numAdj >> numNoun;

	vector<string> adjectives;
	vector<string> nouns;
	for (int i = 0; i < numAdj; ++i) {
		string temp;
		cin >> temp;
		adjectives.push_back(temp);
	}
	for (int i = 0; i < numNoun; ++i) {
		string temp;
		cin >> temp;
		nouns.push_back(temp);
	}

	for (int i = 0; i < numAdj; ++i) {
		for (int j = 0; j < numNoun; ++j) {
			cout << adjectives[i] << " as " << nouns[j] << endl;
		}
	}
	return 0;
}
