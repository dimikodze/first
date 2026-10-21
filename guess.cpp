#include <iostream>
#include "C:\Users\Dimikodze\source\repos\Wordle\consts.cpp"
#include "C:\Users\Dimikodze\source\repos\Wordle\checkSyms.cpp"
#include <cctype>

using namespace std;

void guess(string rid) {
    bool a = 0;
    int b = 0;
    string gue;
    for (int i = 0; i < rid.size() * 2; i++) {
        bool c = 1;
        cout << rid.size() << " latin letters" << endl;
        do {
            cin >> gue;
            if (gue.size() == rid.size() && checkSyms(gue) == 0) {
                c = 0;
            }
        } while (c);

        for (int j = 0; j < rid.size(); j++) {
            if (gue[j] == rid[j]) {
                cout << G << gue[j];
                b++;
            }
            else {
                for (int k = 0; k < rid.size(); k++) {
                    if (gue[j] == rid[k] && a != 1) {
                        cout << Y << gue[j];
                        a = 1;
                    }
                    else if (a == 0 && k == rid.size() - 1) {
                        cout << W << gue[j];
                    }
                }
                a = 0;
            }
        }
        cout << W << endl << endl;
        if (b == rid.size()) {
            cout << "You win!";
            break;
        }
        cout << rid.size() * 2 - i - 1 << " attempts remain" << endl << endl;
        b = 0;
    }
    if (b != rid.size()) {
        cout << "You lose";
    }
}