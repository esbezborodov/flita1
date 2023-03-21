#include <iostream>
#include <string>
#include <set>
using namespace std;


int strSet2(set <string> set) {
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


int strSet1(set <string> set) {
    char oper;

    while (oper != '!') {
        cout << "enter '+' for add set element or '-' for remove set element(strings)\nenter '!' to stop\n";
        cin >> oper;
        switch (oper) {
            case '-' : {
                string str2;
                cout << "enter an element \n";
                cin >> str2;
                set.erase(str2);
                cout << "set elements:\n";
                for(auto i : set)
                    cout << i << endl;
                break;
            }
            case '+' :
                string str1;
                cout << "enter an element:\n";
                cin >> str1;
                set.insert(str1);
                cout << "set elements:\n";
                for(auto j : set)
                    cout << j << endl;
                break;

        }
    }
}


int main() {
    set<string> first_set;
    set<string> second_set;

    {
        int action;
        while (1) {
            cout << "enter '1' for work with first set or '2' for work with second set:\n";
            cin >> action;

            switch (action) {
                case 1:
                    strSet2(second_set);
                    break;
                case 2:
                    strSet1(first_set);
                    break;
            }
        }
    }
}
