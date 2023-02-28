#include <iostream>
#include <string>
#include <set>
using namespace std;


int strSet(set <string> set) {
    char oper;

    while (oper != '!') {
        cout << "enter '+' for add set element or '-' for remove set element(strings)\nenter '!' to stop\n";
        cin >> oper;
        switch (oper) {
            case '-' : {
                string str2;
                cout << "enter a string:\n";
                cin >> str2;
                set.erase(str2);
                cout << "set elements:\n";
                for(auto i : set)
                    cout << i << endl;
                break;
            }
            case '+' :
                string str1;
                cout << "enter a string:\n";
                cin >> str1;
                set.insert(str1);
                cout << "set elements:\n";
                for(auto j : set)
                    cout << j << endl;
                break;

        }
    }
}


int numSet(set <int> set) {
    char oper;

    while (oper != '!') {
        cout << "enter '+' for add set element or '-' for remove set element(numbers)\nenter '!' to stop\n";
        cin >> oper;
        switch (oper) {
            case '+' :
                int num1;
                cout << "enter a number:\n";
                cin >> num1;
                set.insert(num1);
                cout << "set elements:\n";
                for(auto i : set)
                    cout << i << endl;
                break;

            case '-' :
                int num2;
                cout << "enter a number:\n";
                cin >> num2;
                set.erase(num2);
                cout << "set elements:\n";
                for(auto j : set)
                    cout << j << endl;
                break;

        }
    }
}


int main() {
    set <string> str_set;
    set <int> num_set;

     {
        int action;
        cout << "enter '1' for work with strings or '2' for work with numbers:\n";
        cin >> action;

        switch (action) {
            case 1:
                strSet(str_set);
                break;
            case 2:
                numSet(num_set);
                break;
        }
    }
}
