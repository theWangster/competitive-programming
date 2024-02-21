#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	int people;
	cin >> people;
	vector<int> hat_number;
	int opposites = 0;

	for (int i = 0; i < people; ++i) {
		int temp;
		cin >> temp;
		hat_number.push_back(temp);
	}

	int half = people / 2;
	for (int i = 0; i < people / 2; ++i) {
		if (hat_number[i] == hat_number[half + i]) {
			++opposites;
		}
	}

	opposites *= 2;

	cout << opposites << endl;
	return 0;
}
