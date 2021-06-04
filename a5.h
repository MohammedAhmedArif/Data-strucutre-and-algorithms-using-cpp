#include <iostream>
#include <stack>

using namespace std;

void add_(stack<string>& tmp) {
    cout << "\nenter website address(you dont have to type \"www\")\n>>";
    string s;
    cin >> s;
    s = "www." + s;
    tmp.push(s);
}

void show_(stack<string>tmp) {
    system("cls");
    cout << "\n\n\n\t\t\t\tBrowser history\n\n\n";
    while (!tmp.empty()) {
        cout << tmp.top() << endl;
        tmp.pop();
    }
}

void del_(stack<string>& tmp) {
    if (tmp.empty()) {
        cout << "\n\ntheres nothing in search history\n\n";
        return;
    }
    while (!tmp.empty())
        tmp.pop();
    cout << "\n\nhistory got deleted\n\n";
}
int main()
{
    stack<string>s;
    int input = 0;
    cout << "\n\n\n\n\t\t\ta program to display browser history\n\n\n\n";
    do {
        cout << endl;
        system("pause");
        system("cls");
        cout << "\n1. enter website";
        cout << "\n2. show all history";
        cout << "\n3. delete all history";
        cout << "\n4. exit\n\n";
        cout << "enter choice->";
        cin >> input;
        switch (input) {
        case 1:
            add_(s);
            break;
        case 2:
            show_(s);
            break;
        case 3:
            del_(s);
            break;
        case 4:
            cout << "\n\nty for using our program..\n\n";
            break;
        }

    } while (input != 4);
}