#include <bits/stdc++.h>
using namespace std;

int main() {
	const int DAYS_IN_WEEK = 7;
	int curDay, days;
	cin >> curDay >> days;

	cout << "Sun Mon Tue Wed Thr Fri Sat" << endl;
	for (int i = 0; i < curDay - 1; ++i) {
		cout << "    ";
	}

	int day = 1;
	for (int i = curDay - 1; i < DAYS_IN_WEEK; ++i) {
		printf("%3d", day);
		++day;
		if (i != DAYS_IN_WEEK - 1) {
			printf(" ");
		}
	}

	for (int week = 0; week < 3; ++week) {
		printf("\n");
		for (int i = 0; i < DAYS_IN_WEEK; ++i) {
			printf("%3d", day);
			++day;
			if (i != DAYS_IN_WEEK - 1) {
				printf(" ");
			}
		}
	}

	int daysInLastWeek = days - 4 * DAYS_IN_WEEK + curDay - 1;
	printf("\n");
	for (int i = 0; i < daysInLastWeek; ++i) {
		printf("%3d", day);
		++day;
		if (i == daysInLastWeek - 1) {
			printf("\n");
			return 0;
		}
		if (i != DAYS_IN_WEEK - 1) {
			printf(" ");
		}
	}
	return -1;
}
