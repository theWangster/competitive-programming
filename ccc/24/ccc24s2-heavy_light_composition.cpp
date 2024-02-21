#include <bits/stdc++.h>
#include <iterator>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int cases, length;
	cin >> cases >> length;

	for (int i = 0; i < cases; ++i) {
		string word;
		cin >> word;
		bool isCorrect = true;

		int containsChar[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
								0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		// help i forgot how to initilize to 0

		for (int i = 0; i < size(word); ++i) {
			++containsChar[(int)word[i] - 97];
		}

		/*
		for (int augh : containsChar) {
			cout << augh << " ";
		}
		cout << endl;
		*/

		bool isPrevLight = containsChar[(int)word[0] - 97] == 1;
		for (int i = 1; i < size(word); ++i) {
			bool isCurLight = containsChar[(int)word[i] - 97] == 1;
			if (isPrevLight && !isCurLight) {
				isPrevLight = isCurLight;
				continue;
			} else if (!isPrevLight && isCurLight) {
				isPrevLight = isCurLight;
				continue;
			}

			isCorrect = false;
		}

		if (isCorrect) {
			cout << "T" << endl;
		} else {
			cout << "F" << endl;
		}
	}
}
