#include <bits/stdc++.h>
using namespace std;

int main() {
	const int ALL_CHANGE = 3 * 4 * 5;
	int start, end;
	cin >> start >> end;

	while (start <= end) {
		cout << "All positions change in year " << start << endl;
		start += ALL_CHANGE;
	}
	return 0;
}
