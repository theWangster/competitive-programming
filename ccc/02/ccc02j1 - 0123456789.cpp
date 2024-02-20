#include <bits/stdc++.h>
using namespace std;

void drawHLine() { cout << " * * *" << endl; }

void drawNull() { cout << endl; }

void drawVBoth() {
	cout << "*     *" << endl;
	cout << "*     *" << endl;
	cout << "*     *" << endl;
}

void drawVRight() {
	cout << "      *" << endl;
	cout << "      *" << endl;
	cout << "      *" << endl;
}

void drawVLeft() {
	cout << "*      " << endl;
	cout << "*      " << endl;
	cout << "*      " << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int number;
	cin >> number;

	switch (number) {
	case 0:
		drawHLine();
		drawVBoth();
		drawNull();
		drawVBoth();
		drawHLine();
		break;
	case 1:
		drawVRight();
		drawNull();
		drawVRight();
		break;
	case 2:
		drawHLine();
		drawVRight();
		drawHLine();
		drawVLeft();
		drawHLine();
		break;
	case 3:
		drawHLine();
		drawVRight();
		drawHLine();
		drawVRight();
		drawHLine();
		break;
	case 4:
		drawNull();
		drawVBoth();
		drawHLine();
		drawVRight();
		break;
	case 5:
		drawHLine();
		drawVLeft();
		drawHLine();
		drawVRight();
		drawHLine();
		break;
	case 6:
		drawHLine();
		drawVLeft();
		drawHLine();
		drawVRight();
		drawHLine();
		break;
	case 7:
		drawHLine();
		drawVRight();
		drawNull();
		drawVRight();
		break;
	case 8:
		drawHLine();
		drawVBoth();
		drawHLine();
		drawVBoth();
		drawHLine();
		break;
	case 9:
		drawHLine();
		drawVBoth();
		drawHLine();
		drawVRight();
		drawHLine();
		break;
	}

	return 0;
}
