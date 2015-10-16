#include <iostream>

using namespace std;

int main() {
	typedef int score;
	score score1, score2, score3 = 0;
	cout << "Enter first score" << endl;
	cin >> score1;
	cout << "Enter second score" << endl;
	cin >> score2;
	cout << "Enter third score" << endl;
	cin >> score3;

	int total = score1 + score2 + score3;
	float avg = total / 3.0;

	cout << "Average score is " << avg << endl;
	return 0;
}