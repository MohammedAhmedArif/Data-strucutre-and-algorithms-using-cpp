#include <iostream>
#include <list>

using namespace std;

struct Student {
	int stu_ID, stu_semester;
	string stu_name;
	float stu_mark;
};

void Menu() {

	cout << "\n1. Add student";
	cout << "\n2. Search a student by name";
	cout << "\n3. Exit";
	cout <<"\n4. Print all";
	cout << "\nEnter your choice-> ";
}

void clearmsg() {
	string c;
	cout << "\n\nEnter anything to clear screen..";
	cin >> c;
	system("cls");
}

void Add_Student(list<Student>& stu) {
	Student s;
	cout << "\nEnter student's ID->";
	cin >> s.stu_ID;
	cout << "Enter student's name->";
	cin >> s.stu_name;
	cout << "Enter student's semester->";
	cin >> s.stu_semester;
	cout << "Enter student's marks->";
	cin >> s.stu_mark;
	stu.push_back(s);
	cout << "\nStudent got added.\n";
	clearmsg();

}

void Search(const list<Student>& stu) {
	cout << "\n\nEnter student name that you're looking for: ";
	string s;
	cin >> s;
	bool flag = 0;
	for (auto& const x : stu) {
		if (x.stu_name == s) {
			cout << "\nStudent was found.\n";
			cout << "Student name: " << x.stu_name << endl;
			cout << "Student ID: " << x.stu_ID << endl;
			cout << "Student's semester: " << x.stu_semester << endl;
			cout << "Student's marks: " << x.stu_mark << endl << endl;
			flag = 1;
		}
	}
	if (flag)
		cout << "\n\nStudent wasn't found.\n\n";
	clearmsg();
}

void print(const list<Student>& stu) {
	int count = 1;
	if (stu.empty()) {
		cout << "\n\ntheres no student records.";
		clearmsg();
		return;
	}
	for (auto x : stu) {
		cout <<endl<<count++ <<". ID: " << x.stu_ID << endl << "Name: "<<x.stu_name << endl <<"Semester: "<< x.stu_semester << endl <<"Marks: " << x.stu_mark << endl;
		cout << "-------------------------------------\n";
	}
	clearmsg();

}


int main() {
	list<Student>s;
	int input = 0;
	while (input != 3) {
		Menu();
		cin >> input;
		switch (input) {
		case 1:
			Add_Student(s);
			break;
		case 2:
			Search(s);
			break;
		case 3:
			input = 3;
			break;
			case 4:
				print(s);
				break;
		default:
			cout << "\nInvalid entry.\n";
		}
	}
}
