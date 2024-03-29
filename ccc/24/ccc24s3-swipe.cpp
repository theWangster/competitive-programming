#include <bits/stdc++.h>
#include <string>
using namespace std;

bool checkCorrect(vector<int>& start, vector<int>& end, int size) {
	for (int i = 0; i < size; ++i) {
		if (start[i] != end[i]) {
			return false;
		}
	}
	return true;
}

int findNextNum(vector<int>& start, int size, int idx, int target) {
	for (int i = idx + 1; i < size; ++i) {
		if (start[i] == target) {
			return i;
		}
	}
	return -1;
}

int findNextNumLeft(vector<int>& start, int size, int idx, int target) {
	for (int i = idx; i >= 0; --i) {
		if (start[i] == target) {
			return i;
		}
	}
	return -1;
}
void printArr(vector<int>& start) {
	for (int temp : start) {
		cout << temp << " ";
	}
	cout << endl;
}

bool nextMove(vector<int>& start, vector<int>& end, vector<string>& actions, int size, int idx,
			  bool right) {
	/*
	cout << idx << ":" << endl;
	printArr(start);
	*/
	if (idx == size) {
		return checkCorrect(start, end, size);
	}

	if (right) {
		int cur = start[idx];
		int target = end[idx];
		if (cur != target) {
			if (idx - 1 >= 0 && start[idx - 1] == target) {
				// cout << "DO THIS SHIT" << endl;
				string nextAction = "R " + to_string(idx - 1) + " " + to_string(idx);
				actions.push_back(nextAction);
				start[idx] = target;
				return nextMove(start, end, actions, size, idx + 1, false);
			}

			int nextNum = findNextNum(start, size, idx, target);
			if (nextNum == -1) {
				return false;
			}
			for (int i = idx; i < nextNum; ++i) {
				start[i] = target;
			}
			string nextAction = "L " + to_string(idx) + " " + to_string(nextNum);
			actions.push_back(nextAction);
			return nextMove(start, end, actions, size, idx + 1, false);
		}

		return nextMove(start, end, actions, size, idx + 1, false);
	} else {
		int idx_new = size - idx;
		int cur = start[idx_new];
		int target = end[idx_new];
		if (cur != target) {
			if (idx_new + 1 < size && start[idx_new + 1] == target) {
				string nextAction = "L " + to_string(idx_new) + " " + to_string(idx_new + 1);
				actions.push_back(nextAction);
				start[idx_new] = target;
				return nextMove(start, end, actions, size, idx, true);
			}

			int nextNum = findNextNumLeft(start, size, idx_new, target);
			if (nextNum == -1) {
				return false;
			}
			for (int i = nextNum; i <= idx_new; ++i) {
				start[i] = target;
			}
			string nextAction = "R " + to_string(nextNum) + " " + to_string(idx_new);
			actions.push_back(nextAction);
			return nextMove(start, end, actions, size, idx, true);
		}

		return nextMove(start, end, actions, size, idx, true);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int arrSize;
	cin >> arrSize;
	vector<string> actions;

	vector<int> start;
	for (int i = 0; i < arrSize; ++i) {
		int temp;
		cin >> temp;
		start.push_back(temp);
	}
	vector<int> end;
	for (int i = 0; i < arrSize; ++i) {
		int temp;
		cin >> temp;
		end.push_back(temp);
	}

	if (checkCorrect(start, end, arrSize)) {
		cout << "YES" << endl;
		cout << "0" << endl;
		return 0;
	}

	if (nextMove(start, end, actions, arrSize, 0, true)) {
		cout << "YES" << endl;
		cout << actions.size() << endl;
		for (string action : actions) {
			cout << action << endl;
		}
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
