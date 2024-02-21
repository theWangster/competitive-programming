#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	int area;
	cin >> area;

	int length = floor(sqrt(area));
	cout << "The largest square has side length " << length << "." << endl;
	return 0;
}
