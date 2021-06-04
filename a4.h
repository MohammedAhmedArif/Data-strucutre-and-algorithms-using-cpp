#include <iostream>
#include <queue>
#include <string>

using namespace std;

void addcustomer(queue<string>& s) {
	cout << "enter customer name: ";
	string customer;
	cin >> customer;
	s.push(customer);
	cout << "\ncustomer has been added to the queue.";
}
void showAll(queue<string>s) {
	if (s.empty()) {
		cout << "there's no customers.";
		return;
	}
	while (!s.empty()) {
		cout << s.front() << endl;
		s.pop();
	}
}
void service(queue<string>& s) {
	if (s.empty()) {
		cout << "\nTheres no customers in the queue.\n";
		return;
	}
	cout << "\ncustomer details: " << endl;
	cout << s.front() << endl;
	s.pop();
}
int main() {

	queue<string>q;
	int entry = 0;
	char ch = '0';
	string txt = "";
	cout << "A program to solve gas cylinder queues problems\n\n\n";
	do {
		cout << endl << endl << endl;
		system("pause");
		system("cls");
		cout << "\n1. register a customer name";
		cout << "\n2. show how many customers";
		cout << "\n3 show all registered customers names";
		cout << "\n4. start serving customers";
		cout << "\n5. exit";
		cout << "enter your choice->";
		cin >> entry;
		switch (entry) {
		case 1:
			addcustomer(q);
			break;
		case 2:
			q.empty() ? txt = "\n\nthere's no customers in the queue.\n" : txt = "\n\nthere's " + to_string(q.size()) + " customer(s) in the queue.\n\n";
			cout << txt << endl;
			break;
		case 3:
			showAll(q);
			break;
		case 4:
			system("cls");
			cout << "\na. Next customer";
			cout << "\nb.return";
			cout << "\nenter your choice->";
			cin >> ch;
			if (ch == 'a' || ch == 'A') {
				service(q);
				break;
			}
			cout << "\nreturning to main menu..";
			break;
		case 5:
			cout << "\n\nthank you for using our program\n\n";
			break;
		default:
			cout << "\n\ninvalid entry\n\n";
		}
	} while (entry != 5);
}