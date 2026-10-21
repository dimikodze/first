#include <iostream>
#include <string>

using namespace std;

bool checkSyms(string a){
    int b = 0;
    for (int j = 0; j < a.size(); j++) {
        if (isalpha(a[j])) {
            b++;
        }
    }
    if (b == a.size()) {
        return 0;
    }
    else {
        return 1;
    }
}