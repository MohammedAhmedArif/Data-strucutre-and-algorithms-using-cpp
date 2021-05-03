#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec;
	cout << "Enter 5 integers->";
	for (int i = 0; i < 5; i++) {
		int entry;
		cin >> entry;
		vec.push_back(entry);
	}
	int sum, mult, sub, div;
	sum = mult = sub = div = vec[0];
	for (int i = 1; i < vec.size(); i++) {
		sum += vec[i];
		mult *= vec[i];
		sub -= vec[i];
		div /= vec[i];
	}
	cout << "\nSum: " << sum;
	cout << "\nSub: " << sub;
	cout << "\nMult: " << mult;
	cout << "\nDiv: " << div;
};
