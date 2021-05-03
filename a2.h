#include <iostream>
#include <vector>

using namespace std;

string Grade(float marks, float& g) {
	if (marks >= 85) {
		g = 4;
		return "A+";
	}
	if (marks >= 80) {
		g = 3.7;
		return "A+";
	}
	else if (marks >= 75) {
		g = 3.3;
		return "B+";
	}
	else if (marks >= 70) {
		g = 3;
		return "B";
	}
	else if (marks >= 65) {
		g = 2.7;
		return "B-";
	}
	else if (marks >= 60) {
		g = 2.3;
		return "C+";
	}
	else if (marks >= 55) {
		g = 2;
		return "C";
	}
	else if (marks >= 50) {
		g = 1.7;
		return "C-";
	}
	else if (marks >= 45) {
		g = 1.3;
		return "D";
	}
	else if (marks >= 40) {
		g = 1;
		return "D";
	}
	else {
		g = 0;
		return "F";
	}
}
int main() {
	vector<int>marks;
	int SIZE, sum = 0;
	cout << "Enter amount of subjects->";
	cin >> SIZE;
	cout << "Enter " << SIZE << " subject's marks: ";
	for (int i = 0; i < SIZE; i++) {
		int entry;
		cin >> entry;
		while (entry < 0 || entry > 100) {
			cout << "invalid input, try again: ";
			cin >> entry;
		}
		sum += entry;
		marks.push_back(entry);
	}
	cout << "\nMarks for all subjects: ";
	for (const auto& x : marks)
		cout << x << " ";
	cout << "\nTotal is: " << sum << endl;
	float average = float(sum) / SIZE, gpa = 0;
	cout << "\nAverage of marks: " << average;
	cout << "\nPercentage of student's total marks: " << average << "%\n";
	cout << "\nGrade of student total marks: " << Grade(average, gpa) << endl;
	cout << "\nGPA of student total marks: " << gpa << endl;

};
